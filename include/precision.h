#ifndef CVECTOR_PRECISION_H
#include <math.h>
#include <float.h>

#if defined(CVECTOR_USE_FLOAT)
#define CVECTOR_VALUE float
#define CVECTOR_SQRT sqrtf
#define CVECTOR_ACOS acosf
#define CVECTOR_ABS fabsf
#define CVECTOR_EPSILON FLT_EPSILON
#elif defined(CVECTOR_USE_DOUBLE)
#define CVECTOR_VALUE double
#define CVECTOR_SQRT sqrt
#define CVECTOR_ACOS acos
#define CVECTOR_ABS fabs
#define CVECTOR_EPSILON DBL_EPSILON
#else
#define CVECTOR_VALUE long double
#define CVECTOR_SQRT sqrtl
#define CVECTOR_ACOS acosl
#define CVECTOR_ABS fabsl
#define CVECTOR_EPSILON LDBL_EPSILON
#endif

#if defined(CVECTOR_DISABLE_EPSILON)
#undef CVECTOR_EPSILON
#define CVECTOR_EPSILON 0
#define CVECTOR_EPSILON_COMP(diff) (diff = CVECTOR_EPSILON)
#else
#define CVECTOR_EPSILON_COMP(diff) (diff <= CVECTOR_EPSILON)
#endif

#define CVECTOR_PRECISION_H
#endif
