import numpy as np
import struct
import tensorflow as tf
import random
from pathlib import Path
# import cocotb
# from cocotb_coverage.coverage import *

FLOAT32_MAX = 3.4e38
FLOAT32_MIN = -3.4e38


# mac_coverage=coverage_section(Coverpoint('top.put_inp_A_a',vname='a_int',bins=list()),Coverpoint('top.put_inp_B_b',vname='b_int',bins=list()),
#     Coverpoint('top.put_inp_C_c',vname='c_int',bins=list()),CoverCross('top.cross_cover',items = ['top.put_inp_A_a','top.put_inp_B_b','top.put_inp_C_c']))


# @mac_coverage
def MAC_model(a_int,b_int,c_int,sel):
    if (sel==0b1):
        a=signed_binary_to_int(format(a_int,'016b')[8:])
        b=signed_binary_to_int(format(b_int,'016b')[8:])
        c=signed_binary_to_int(format(c_int,'032b'))
        mac_int=(a*b)+c

        return int_to_signed_binary(mac_int,32)

    elif (sel==0b0):
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

        return mac_result_binary


##########################################################################################
################################SUPPORTING MODULES########################################

def read_file_to_array(filename):
    try:
        with open(filename, 'r') as file:
            lines = file.readlines()
        # Strip newline characters and return as an array
        return [line.strip() for line in lines]
    except FileNotFoundError:
        print("The file was not found.")
        return []
    except IOError:
        print("An error occurred while reading the file.")
        return []



def signed_binary_to_int(bin_str):
    """Convert signed binary string to integer."""
    if bin_str[0] == '1':  # Negative number in two's complement
        return int(bin_str, 2) - (1 << len(bin_str))
    return int(bin_str, 2)

def int_to_signed_binary(num, bits):
    """Convert integer to signed binary string of specified bits."""
    if num < 0:
        num = (1 << bits) + num  # Two's complement
    return format(num, f'0{bits}b')


def binary_to_bfloat16(binary_str):
    """Convert a 16-bit binary string to a bfloat16 Tensor."""
    int_value = int(binary_str, 2)
    return tf.bitcast(tf.constant(int_value, dtype=tf.uint16), tf.bfloat16)



def binary_to_float32(binary_str):
    """Convert a 32-bit binary string to a float32 Tensor."""
    # Convert the binary string to an integer
    int_value = int(binary_str, 2)
    
    # Convert the integer to a float32 tensor
    fp32 = tf.bitcast(tf.constant(int_value, dtype=tf.uint32), tf.float32)
    
    return fp32

def bfloat16_to_binary(bfloat16_value):
    """Convert a bfloat16 number to its binary representation as a string."""

    bfloat16_tensor = tf.constant(bfloat16_value, dtype=tf.bfloat16)
    
    # Bitcast the bfloat16 tensor to int32
    int_tensor = tf.bitcast(bfloat16_tensor, tf.uint16)
    
    # Convert the int32 value to a binary string
    binary_representation = format(int_tensor.numpy(), '016b')  # 32 bits for bfloat16 in int32
    
    return binary_representation

def float32_to_binary(float32_value):
    """Convert a float32 value to a 32-bit binary string."""
    fp_32=tf.constant(float32_value, dtype=tf.float32)
    int_value = tf.bitcast(fp_32, tf.uint32)
    return format(int_value.numpy(), '032b')
##########################################################################################




