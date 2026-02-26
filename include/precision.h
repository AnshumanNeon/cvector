#ifndef PRECISION_H
#include <math.h>

#if defined(CVECTOR_USE_FLOAT)
#define CVECTOR_VALUE float
#define CVECTOR_SQRT sqrtf
#define CVECTOR_ACOS acosf
#elif defined(CVECTOR_USE_DOUBLE)
#define CVECTOR_VALUE double
#define CVECTOR_SQRT sqrt
#define CVECTOR_ACOS acos
#else
#define CVECTOR_VALUE long double
#define CVECTOR_SQRT sqrtl
#define CVECTOR_ACOS acosl
#endif

#define PRECISION_H
#endif
