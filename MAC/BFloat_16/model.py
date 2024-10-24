import numpy as np
import struct

# Function to convert 16-bit binary string (bfloat16) to float32
def binary16_to_float32(bfloat16_bin):
    """Converts a 16-bit binary string (bfloat16) to float32."""
    # Convert the binary string to a 16-bit unsigned integer
    bfloat16_int = int(bfloat16_bin, 2)
    
    # Pack as 32-bit float with zero padding in lower bits (simulate bfloat16)
    bfloat16_packed = (bfloat16_int << 16) & 0xFFFF0000
    
    # Convert to float32
    return struct.unpack('f', struct.pack('I', bfloat16_packed))[0]

# Function to convert 32-bit binary string (fp32) to float32
def binary32_to_float32(fp32_bin):
    """Converts a 32-bit binary string (fp32) to float32."""
    # Convert the binary string to a 32-bit unsigned integer
    fp32_int = int(fp32_bin, 2)
    
    # Convert to float32
    return struct.unpack('f', struct.pack('I', fp32_int))[0]

def float_to_bin32(number):
    # Pack the float into 4 bytes using IEEE 754 standard
    packed = struct.pack('!f', number)
    # Unpack the 4 bytes into an integer
    unpacked = struct.unpack('!I', packed)[0]
    # Format the integer as a 32-bit binary string
    binary_string = format(unpacked, '032b')
    return binary_string


def mac_bfloat16_fp32(a_bin, b_bin, c_bin):
    """Performs the MAC operation (a * b) + c where a and b are bfloat16 (binary), c is fp32 (binary)."""
    # Convert binary strings to float32
    a_fp32 = binary16_to_float32(a_bin)
    b_fp32 = binary16_to_float32(b_bin)
    c_fp32 = binary32_to_float32(c_bin)
    
    # Perform MAC operation in float32
    result_fp32 = (a_fp32 * b_fp32) + c_fp32
    
    return float_to_bin32(result_fp32)



# # Example binary inputs
# a_bin = '0100111111010001'  # Simulated bfloat16 binary (e.g., 3.14)
# b_bin = '0101010010001001'  # Simulated bfloat16 binary (e.g., 1.59)
# c_bin = '01010100001111000110101010000000'  # Simulated fp32 binary (e.g., 2.718)

# # Perform the MAC operation
# result = mac_bfloat16_fp32(a_bin, b_bin, c_bin)

# print("Result of MAC operation (a * b) + c in float32:", result)
