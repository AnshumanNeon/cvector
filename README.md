# cvector

A (mathematical) vector library written purely in C that you can statically link to your project. It provides 2D, 3D and 4D vectors and various operations on them.

The current features include:
- Basic Arithemetic (Addition, Subtraction)
- Scalar Multiplication and Dvision
- Dot, Cross and Hadamard Products (component-to-component multiplication)
- Projection
- Normalization
- Length and distances (squared too, for each)
- Linear interpolation
- Angle between vectors
- Floating point error detection
- Comparison (vector equality and magnitude comparison)

## Installation

Clone the repo and run `make` command to build the library. A `libcvector.a` will be generated in the `build` directory. Link to that static library and add the `include` directory to your include path during the compilation process.

## Error Handling

Almost all functions have the functionality of error handling. The general idea is that the user passes an integer pointer to the function, the function performs it's operation and then runs an error check. If any error is caught, then the specific error flag will be raised in the integer pointer. The function will subsequently return it's result, whatever so it is.

If no error flags are raised and the operation is successful then the `returnCode` is equal to 0, signalling success.

To check for specific flags, the user has to perform a bitwise AND (`&`) operation on the `returnCode`. If the result is `1` then the error flag has been raised.

Here is an example of how to handle errors:
```C
int returnCode;
Vector2 a = { .x = 1, .y = 2 };
Vector2 b = { .x = 3, .y = 1 };

Vector2 c = AddVector2(a, b, &returnCode);
if(returnCode & CVECTOR_OVERFLOW_ERROR) {
	printf("OVERFLOW!!!\n");
}
```

The following are the error flags that can be raised:
`CVECTOR_SUCCESS, CVECTOR_ZERO_DIVISON_ERROR, CVECTOR_OVERFLOW_ERROR, CVECTOR_UNDERFLOW_ERROR, CVECTOR_INEXACT_VALUE, CVECTOR_INVALID_ERROR, CVECTOR_FPE_UNSUPPORTED`

## Precision

The library by default uses `long double` to store vector components and return values. But due to platform and hardware specific implementations of it, it is rather variable as to the exact precision it provides. For example: The Microsoft Visual C++ for x86, `long double` is made synonymous to `double` while the GNU C Compiler implements `long double` as an 80-bit extended precision on x86 processors irrespective of the actual physical storage used for the type (which can be either 96 or 128 bits).

The library also provides the flexibility to change the precision to `float` or `double` if it is required. This is done by defining macros. It is reccomended that the macros are defined globally (preferably in compiler flags) and not locally (example- in the source files themselves) as that might lead to ABI inconsistency (different files might get compiled with different precisions and that can lead to precision loss or even conversion errors).

To use `float` as your preferred precision, define the `CVECTOR_USE_FLOAT` macro at compile time (like ` ... -DCVECTOR_USE_FLOAT ...`)

To use `double` as your preferred precision, define the `CVECTOR_USE_DOUBLE` macro at compile time (like ` ... -DCVECTOR_USE_DOUBLE ...`)

### Comparison

In the equality functions, the function returns 0 if false or the values are not equal, or it returns 1 if true or the values are equal.

In the comparison functions, the function returns 0 if the values are equal, 1 if the first argument is bigger than the second, -1 if the first argument is smaller than the second.

Due to such a volatile state of floating-point precision, the library uses epsilon equality in it's comparison utility functions. The value of epsilon is defined based on the precision the user chooses (different epsilon for `float`, `double` and `long double`). The user may wish to alltogether refuse to use epsilon comparison which can be done by defining the `CVECTOR_DISABLE_EPSILON` macro. Once again it is reccomended that this macro is defined at a global level, preferably in the compiler flags.

### By Anshuman