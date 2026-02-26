#ifndef BASE_H

#define CVECTOR_VALUE long double

/* Vector struct definitions */
typedef struct Vector2_ST {
  CVECTOR_VALUE x;
  CVECTOR_VALUE y;
} Vector2;

typedef struct Vector3_ST {
  CVECTOR_VALUE x;
  CVECTOR_VALUE y;
  CVECTOR_VALUE z;
} Vector3;

typedef struct Vector4_ST {
  CVECTOR_VALUE x;
  CVECTOR_VALUE y;
  CVECTOR_VALUE z;
  CVECTOR_VALUE w;
} Vector4;

/* some common and useful vectors */
/* zero vector */
#define ZeroVector2 GetVector2(0, 0)
#define ZeroVector3 GetVector3(0, 0, 0)
#define ZeroVector4 GetVector4(0, 0, 0, 0)

/* unit x vector */
#define UnitXVector2 GetVector2(1, 0)
#define UnitXVector3 GetVector3(1, 0, 0)
#define UnitXVector4 GetVector4(1, 0, 0, 0)

/* unit y vector */
#define UnitYVector2 GetVector2(0, 1)
#define UnitYVector3 GetVector3(0, 1, 0)
#define UnitYVector4 GetVector4(0, 1, 0, 0)

/* unit z vector */
#define UnitZVector3 GetVector3(0, 0, 1)
#define UnitZVector4 GetVector4(0, 0, 1, 0)

/* unit w vector */
#define UnitWVector4 GetVector4(0, 0, 0, 1)

#define BASE_H
#endif
