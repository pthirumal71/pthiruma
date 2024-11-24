# Reverse Engineering with GDB and Ghidra

## Overview

- This program introduces basic reverse engineering concepts using XOR transformations. 
- The goal is to reverse the transformation and uncover the flag. 
- Tools like GDB or Ghidra can help analyze the flow of the program.

## Code Breakdown

- **set_flag_len()**: Calculates the length of the flag from `flag.txt`.
- **init()**: Reads the flag, applies an XOR transformation, and stores it in `transformations[]`.
- **print_transformation_key()**: Displays the transformation values.
- **validate_flag()**: Compares the input flag with the transformed flag.
- **main()**: Initializes the transformations, prints them, and validates user input.

## Note

1. The binary has not been heavily stripped. 
    - The reason being that heavily stripping it works great to thwart GDB but not ghidra
    - This is meant to be relatively easy
