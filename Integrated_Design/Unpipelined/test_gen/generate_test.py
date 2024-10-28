import random
import tensorflow as tf

# Define float32 limits
FLOAT32_MIN = -3.4e38
FLOAT32_MAX = 3.4e38

# Function to generate random bfloat16 value, avoiding zero, infinity, and NaN
def generate_bfloat16():
    while True:
        value = random.uniform(-10.0, 10.0)  # Moderate range to avoid extreme values
        bfloat16_value = tf.cast(value, tf.bfloat16).numpy()
        if bfloat16_value != 0.0 and not tf.math.is_inf(bfloat16_value) and not tf.math.is_nan(bfloat16_value):
            return tf.constant(bfloat16_value, dtype=tf.bfloat16)

# Generate test case avoiding corner cases
def generate_test_case():
    while True:
        # Generate random bfloat16 values for a and b, avoiding extreme values
        a_bfloat16 = generate_bfloat16()
        b_bfloat16 = generate_bfloat16()
        
        # Generate random float32 value for c, avoiding extreme values
        c_fp32 = random.uniform(-100.0, 100.0)

        # Perform the bfloat16 multiplication and rounding to nearest even
        intermediate_result = tf.cast(a_bfloat16 * b_bfloat16, tf.bfloat16)

        # Convert the intermediate result to float32 for addition with c
        intermediate_result_fp32 = tf.cast(intermediate_result, tf.float32)
        result_fp32 = intermediate_result_fp32 + tf.cast(c_fp32, tf.float32)

        # Round the final result to the nearest even in fp32 format
        result_fp32_rounded = tf.cast(result_fp32, tf.float32).numpy()

        # Check if result is within float32 range
        if FLOAT32_MIN <= result_fp32_rounded <= FLOAT32_MAX:
            break  # Valid result, no overflow
        
    # Convert values to binary representations for output
    a_bfloat16_binary = format(tf.bitcast(a_bfloat16, tf.uint16).numpy(), '016b')
    b_bfloat16_binary = format(tf.bitcast(b_bfloat16, tf.uint16).numpy(), '016b')
    c_fp32_binary = format(tf.bitcast(tf.constant(c_fp32, dtype=tf.float32), tf.uint32).numpy(), '032b')
    result_fp32_binary = format(tf.bitcast(tf.constant(result_fp32_rounded, dtype=tf.float32), tf.uint32).numpy(), '032b')

    return {
        "a_bfloat16": a_bfloat16_binary,
        "b_bfloat16": b_bfloat16_binary,
        "c_fp32_binary": c_fp32_binary,
        "result_fp32_binary": result_fp32_binary,
    }

# Generate multiple test cases and write to files, with optional seed for reproducibility
def create_test_cases(num_cases=10, seed=None):
    if seed is not None:
        random.seed(seed)  # Set the random seed if provided
    
    with open("a_bfloat16.txt", "w") as a_file, \
         open("b_bfloat16.txt", "w") as b_file, \
         open("c_fp32.txt", "w") as c_file, \
         open("result_fp32.txt", "w") as result_file:
        
        for _ in range(num_cases):
            case = generate_test_case()
            
            # Write each component to its respective file
            a_file.write(case['a_bfloat16'] + "\n")
            b_file.write(case['b_bfloat16'] + "\n")
            c_file.write(case['c_fp32_binary'] + "\n")
            result_file.write(case['result_fp32_binary'] + "\n")

# Example usage: generate 1000 test cases with a seed for reproducibility
create_test_cases(1000, seed=1234)
print("1000 test cases have been generated and written to files with seed 1234.")
