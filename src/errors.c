#include "errors.h"

int GetErrorCode() {
  enum CVectorCode error_code = -1;

  // quit if floating point exceptions are not supported
  // when fpe is not supported, FE_ALL_EXCEPT is 0
  if(FE_ALL_EXCEPT == 0) {
    error_code = CVECTOR_FPE_UNSUPPORTED;
    return error_code;
  }

  if(fetestexcept(FE_DIVBYZERO)) {
    error_code = error_code || CVECTOR_ZERO_DIVISON_ERROR;
  }
  if(fetestexcept(FE_INEXACT)) {
    error_code = error_code || CVECTOR_INEXACT_VALUE;
  }
  if(fetestexcept(FE_INVALID)) {
    error_code = error_code || CVECTOR_INVALID_ERROR;
  }
  if(fetestexcept(FE_OVERFLOW)) {
    error_code = error_code || CVECTOR_OVERFLOW_ERROR;
  }
  if(fetestexcept(FE_UNDERFLOW)) {
    error_code = error_code || CVECTOR_UNDERFLOW_ERROR;
  }
  
  feclearexcept(FE_ALL_EXCEPT);

  if(error_code == -1) {
    error_code = CVECTOR_SUCCESS;
  }

  return error_code;
}
