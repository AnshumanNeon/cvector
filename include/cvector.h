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

/* vector initiliasation */
Vector2 GetVector2(double x, double y);
Vector3 GetVector3(dobule x, double y, double z);
Vector4 GetVector4(double x, double y, double z, double w);

/* Addition */
Vector2 AddVector2(Vector2 v1, Vector2 v2);
Vector3 AddVector3(Vector3 v1, Vector3 v2);
Vector4 AddVector4(Vector4 v1, Vector4 v2);

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

/* Cross Product */
double CrossVector2(Vector2 v1, Vector2 v2);
Vector3 CrossVector3(Vector3 v1, Vector3 v2);

/* magnitude */
double MagVector2(Vector2 v);
double MagVector3(Vector3 v);
double MagVector4(Vector4 v);

/* unit vector */
Vector2 UnitVector2(Vector2 v);
Vector3 UnitVector3(Vector3 v);
Vector4 UnitVector4(Vector4 v);

#define CVECTOR_H
#endif
