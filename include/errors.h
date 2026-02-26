#ifndef CVECTOR_ERRORS_H
#include <fenv.h>

enum CVectorCode {
  CVECTOR_SUCCESS            = 0,
  CVECTOR_ZERO_DIVISION_ERROR = 1 << 1,
  CVECTOR_OVERFLOW_ERROR     = 1 << 2,
  CVECTOR_UNDERFLOW_ERROR    = 1 << 3,
  CVECTOR_INEXACT_VALUE      = 1 << 4,
  CVECTOR_INVALID_ERROR      = 1 << 5,
  CVECTOR_FPE_UNSUPPORTED    = 1 << 6
};

int GetErrorCode();

#define CVECTOR_ERRORS_H
#endif
