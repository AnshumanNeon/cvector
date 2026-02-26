#include "errors.h"

int GetErrorCode() {
  int error_code = 0; // if no errors then automatically equal to 0

  // quit if floating point exceptions are not supported
  // when fpe is not supported, FE_ALL_EXCEPT is 0
  if(FE_ALL_EXCEPT == 0) {
    error_code |= CVECTOR_FPE_UNSUPPORTED;
    return error_code;
  }

  if(fetestexcept(FE_DIVBYZERO)) {
    error_code |= CVECTOR_ZERO_DIVISION_ERROR;
  }
  if(fetestexcept(FE_INEXACT)) {
    error_code |= CVECTOR_INEXACT_VALUE;
  }
  if(fetestexcept(FE_INVALID)) {
    error_code |= CVECTOR_INVALID_ERROR;
  }
  if(fetestexcept(FE_OVERFLOW)) {
    error_code |= CVECTOR_OVERFLOW_ERROR;
  }
  if(fetestexcept(FE_UNDERFLOW)) {
    error_code |= CVECTOR_UNDERFLOW_ERROR;
  }
  
  feclearexcept(FE_ALL_EXCEPT);

  return error_code;
}
