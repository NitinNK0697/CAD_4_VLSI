import os
import random

def int_to_twos_complement_binary(value, bits):
    """Convert an integer to a two's complement binary string with a specified bit length."""
    if bits == 8:
        # 8-bit signed two's complement binary
        if value < 0:
            value = (1 << bits) + value
        binary_str = f'{value:08b}'
    elif bits == 32:
        # 32-bit signed two's complement binary
        if value < 0:
            value = (1 << bits) + value
        binary_str = f'{value:032b}'
    return binary_str

def generate_mac_test_case(a, b, c):
    # Perform the MAC operation (a * b) + c
    mac_result = (a * b) + c

    # Ensure mac_result is within 32-bit signed range
    mac_result &= 0xFFFFFFFF
    if mac_result >= 0x80000000:
        mac_result -= 0x100000000

    # Convert each number to two's complement binary string
    a_bin = int_to_twos_complement_binary(a, 8)
    b_bin = int_to_twos_complement_binary(b, 8)
    c_bin = int_to_twos_complement_binary(c, 32)
    mac_bin = int_to_twos_complement_binary(mac_result, 32)

    return a_bin, b_bin, c_bin, mac_bin

def write_test_cases(num_cases, output_dir, seed=None):
    # Set the seed for reproducibility
    if seed is not None:
        random.seed(seed)

    # Create the directory if it doesn't exist
    os.makedirs(output_dir, exist_ok=True)

    # Lists to store binary representations for each variable
    a_cases, b_cases, c_cases, mac_cases = [], [], [], []

    for i in range(num_cases):
        # Generate random signed values for a, b, and c
        a = random.randint(-128, 127)          # 8-bit signed integer
        b = random.randint(-128, 127)          # 8-bit signed integer
        c = random.randint(-2**31, 2**31 - 1)  # 32-bit signed integer

        # Generate the binary strings for a, b, c, and MAC result
        a_bin, b_bin, c_bin, mac_bin = generate_mac_test_case(a, b, c)

        # Append each binary string to its respective list
        a_cases.append(a_bin)
        b_cases.append(b_bin)
        c_cases.append(c_bin)
        mac_cases.append(mac_bin)

        print(f"Generated test case {i}: a={a} ({a_bin}), b={b} ({b_bin}), c={c} ({c_bin}), mac={(a * b) + c} (mod 2^32) ({mac_bin})")

    # Write all values to their respective files, one test case per line
    with open(os.path.join(output_dir, "a_values.txt"), 'w') as f_a:
        f_a.write("\n".join(a_cases))
    with open(os.path.join(output_dir, "b_values.txt"), 'w') as f_b:
        f_b.write("\n".join(b_cases))
    with open(os.path.join(output_dir, "c_values.txt"), 'w') as f_c:
        f_c.write("\n".join(c_cases))
    with open(os.path.join(output_dir, "mac_output.txt"), 'w') as f_mac:
        f_mac.write("\n".join(mac_cases))

# Example usage
output_directory = "mac_test_cases"
number_of_test_cases = 1000  # Adjust this as needed
random_seed = 42  # Set a seed for reproducibility

write_test_cases(number_of_test_cases, output_directory, seed=random_seed)
