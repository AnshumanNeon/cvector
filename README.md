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

## Installation

Clone the repo and run `make` command to build the library. A `libcvector.a` will be generated in the `build` directory. Link to that static library and add the `include` directory to your include path during the compilation process.

## Error Handling

Almost all functions have the functionality of error handling. The general idea is that the user passes an integer pointer to the function, the function performs it's operation and then runs an error check. If any error is caught, then the specific error flag will be raised in the integer pointer. The function will subsequently return it's result, whatever so it is.

If no error flags are raised and the operation is successful then the `returnCode` is equal to 0, signalling success.

To check for specific flags, the user has to perform a bitwise AND (`&&`) operation on the `returnCode`. If the result is `1` then the error flag has been raised.

Here is an example of how to handle errors:
```
int returnCode;
Vector2 a = { .x = 1, .y = 2 };
Vector2 b = { .x = 3, .y = 1 };

Vector2 c = AddVector2(a, b, &returnCode);
if(returnCode && CVECTOR_OVERFLOW_ERROR) {
	printf("OVERFLOW!!!\n");
}
```

The following are the error flags that can be raised:
`CVECTOR_SUCCESS, CVECTOR_ZERO_DIVISON_ERROR, CVECTOR_OVERFLOW_ERROR, CVECTOR_UNDERFLOW_ERROR, CVECTOR_INEXACT_VALUE, CVECTOR_INVALID_ERROR, CVECTOR_FPE_UNSUPPORTED`

### By Anshuman