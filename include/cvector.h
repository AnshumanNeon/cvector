#ifndef CVECTOR_H

/* Vector struct definitions */
typedef struct Vector2 {
  long double x;
  long double y;
} Vector2;

typedef struct Vector3 {
  long double x;
  long double y;
  long double z;
} Vector3;

typedef struct Vector4 {
  long double x;
  long double y;
  long double z;
  long double w;
} Vector4;

/* Addition */
Vector2 AddVector2(Vector2 v1, Vector2 v2);
Vector3 AddVector3(Vector3 v1, Vector3 v2);
Vector4 AddVector4(Vector4 v1, Vector4 v2)

/* Subtraction */
Vector2 SubVector2(Vector2 v1, Vector2 v2);
Vector3 SubVector3(Vector3 v1, Vector3 v2);
Vector4 SubVector4(Vector4 v1, Vector4 v2);

/* Scalar Multiplcation */
Vector2 MulVector2D(Vector2 v, double x);
Vector3 MulVector3D(Vector3 v, double x);
Vector4 MulVector4D(Vector4 v, double x);

/* Dot Product */
double DotVector2(Vector2 v1, Vector2 v2);
double DotVector3(Vector3 v1, Vector3 v2);
double DotVector4(Vector4 v1, Vector4 v2);

#define CVECTOR_H
#endif
