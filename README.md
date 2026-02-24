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

## How to use?

Clone the repo and run `make` command to build the library. You'll recieve a `libcvector.a` in under the build/ directory inside your cloned repo. Link to that static library and add the `include` directory to your include path during the compilation process.

### By Anshuman