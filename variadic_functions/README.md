# 0x10. C - Variadic functionsء

## Description
This project covers variadic functions in C.

## Task 0: sum_them_all
A function that returns the sum of all its parameters.

- If `n` is 0, the function returns 0.
- Uses `va_start`, `va_arg`, and `va_end` to access variadic arguments.

## Prototype
int sum_them_all(const unsigned int n, ...);
