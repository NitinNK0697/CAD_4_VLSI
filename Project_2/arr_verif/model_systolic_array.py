import numpy as np
import struct
import tensorflow as tf
import random
from pathlib import Path

# Main model to mimic bsv systolic array
def Systolic_Array_model(X,Y,mode):

    if(mode==1):
        matrix_product=Integer_Matrix_multiplier(X,Y)

    else:
        matrix_product=bfloat16_matrix_multiply_4x4(X,Y)

    return matrix_product


def Integer_Matrix_multiplier(X,Y):

    result = [[0 for _ in range(4)] for _ in range(4)]
    
    # Perform matrix multiplication
    for i in range(4):  # Row index of matrix X
        for j in range(4):  # Column index of matrix Y
            for k in range(4):  # Iterate through row of matrix X and column of matrix Y
                result[i][j] += X[i][k] * Y[k][j]
    
    return result

def MAC_bfloat(a_int,b_int,c_int):
    
    a_bf16=binary_to_bfloat16(format(a_int,'016b'))
    b_bf16=binary_to_bfloat16(format(b_int,'016b'))
    c_fp32=binary_to_float32(format(c_int,'032b'))

    # print("a_bfloat",bfloat16_to_binary(a_bf16), "c_bfloat",float32_to_binary(c_fp32))
    

    # Multiply and round to bfloat16
    product = tf.cast(a_bf16 * b_bf16, dtype=tf.bfloat16).numpy()

    # Convert to float32
    product_fp32 = tf.cast(product, dtype=tf.float32)

    # Convert c to float32
    # c_fp32 = binary_to_float32(c)

    # Add c and product
    mac_result = product_fp32 + c_fp32

    # Round the result to float32
    mac_result_rounded = tf.cast(mac_result, dtype=tf.float32).numpy()

    # Convert the result to 32-bit binary string
    mac_result_binary = float32_to_binary(mac_result_rounded)


    return signed_binary_to_int(mac_result_binary)



def bfloat16_matrix_multiply_4x4(A, B):
    
    # Initialize the result matrix with zeros
    result = [[0 for _ in range(4)] for _ in range(4)]
    
    # Perform the matrix multiplication using mac
    for i in range(4):  # Iterate over rows of A
        for j in range(4):  # Iterate over columns of B
            # Compute the dot product for result[i, j]
            acc = 0  # Accumulator for the MAC operation
            for k in range(4):  # Iterate over columns of A / rows of B
                acc = MAC_bfloat(A[i][k], B[k][j], acc)
            result[i][j] = acc  # Store the computed value
    
    return result



def binary_to_bfloat16(binary_str):
    """Convert a 16-bit binary string to a bfloat16 Tensor."""
    int_value = int(binary_str, 2)
    return tf.bitcast(tf.constant(int_value, dtype=tf.uint16), tf.bfloat16)

def bfloat_generate():
    a_bf16 = tf.random.uniform(shape=(), minval=-10.0, maxval=10.0, dtype=tf.bfloat16)

    raw_bits = tf.bitcast(a_bf16, tf.uint16)
    
    # Format as a binary string
    binary_representation = format(raw_bits.numpy(), '016b') 

    return binary_representation


def signed_binary_to_int(bin_str):
    """Convert signed binary string to integer."""
    if bin_str[0] == '1':  # Negative number in two's complement
        return int(bin_str, 2) - (1 << len(bin_str))
    return int(bin_str, 2)


def binary_to_float32(binary_str):
    """Convert a 32-bit binary string to a float32 Tensor."""
    # Convert the binary string to an integer
    int_value = int(binary_str, 2)
    
    # Convert the integer to a float32 tensor
    fp32 = tf.bitcast(tf.constant(int_value, dtype=tf.uint32), tf.float32)
    
    return fp32

def float32_to_binary(float32_value):
    """Convert a float32 value to a 32-bit binary string."""
    fp_32=tf.constant(float32_value, dtype=tf.float32)
    int_value = tf.bitcast(fp_32, tf.uint32)
    return format(int_value.numpy(), '032b')


