#include "cvector.h"
#include <math.h>

/* vector initialization */
Vector2 GetVector2(double x, double y) {
  Vector2 result = ( .x = x, .y = y );
  return result;
}

Vector3 GetVector3(dobule x, double y, double z) {
  Vector3 result = ( .x = x, .y = y, .z = z );
  return result;
}

Vector4 GetVector4(double x, double y, double z, double w) {
  Vector4 result = ( .x = x, .y = y, .z = z, .w = w );
  return result;
}

/* Addition */
Vector2 AddVector2(Vector2 v1, Vector2 v2) {
  Vector2 new = { .x = v1.x + v2.x, .y = v1.y + v2.y };
  return new;
}

Vector3 AddVector3(Vector3 v1, Vector3 v2) {
  Vector3 new = { .x = v1.x + v2.x, .y = v1.y + v2.y, .z = v1.z + v2.z };
  return new;
}

Vector4 AddVector4(Vector4 v1, Vector4 v2) {
  Vector4 new = { .x = v1.x + v2.x, .y = v1.y + v2.y, .z = v1.z + v2.z, .w = v1.w + v2.w };
  return new;
}

/* Subtraction */
Vector2 SubVector2(Vector2 v1, Vector2 v2) {
  Vector2 new = { .x = v1.x - v2.x, .y = v1.y - v2.y };
  return new;
}

Vector3 SubVector3(Vector3 v1, Vector3 v2) {
  Vector3 new = { .x = v1.x - v2.x, .y = v1.y - v2.y, .z = v1.z - v2.z };
  return new;
}

Vector4 SubVector4(Vector4 v1, Vector4 v2) {
  Vector4 new = { .x = v1.x - v2.x, .y = v1.y - v2.y, .z = v1.z - v2.z, .w = v1.w - v2.w };
  return new;
}

/* Scalar Multiplication */
Vector2 MulVector2D(Vector2 v, double x) {
  Vector2 new = { .x = v.x * x, .y = v.y * x };
  return new;
}

Vector3 MulVector3D(Vector3 v, double x) {
  Vector3 new = { .x = v.x * x, .y = v.y * x, .z = v.z * x };
  return new;
}

Vector4 MulVector4D(Vector4 v, double x) {
  Vector4 new = { .x = v.x * x, .y = v.y * x, .z = v.z * x, .w = v.w * x };
  return new;
}

/* Scalar Divison */
Vector2 DivVector2D(Vector2 v, double x) {
  double inv_x = 1/x;
  return MulVector2D(v, inv_x);
}

Vector3 DivVector3D(Vector3 v, double x) {
  double inv_x = 1/x;
  return MulVector3D(v, inv_x);
}

Vector4 DivVector4D(Vector4 v, double x) {
  double inv_x = 1/x;
  return MulVector3
    D(v, inv_x);
}

/* Dot Product */
double DotVector2(Vector2 v1, Vector2 v2) {
  double dot = v1.x * v2.x + v1.y * v2.y;
  return dot;
}

double DotVector3(Vector3 v1, Vector3 v2) {
  double dot = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
  return dot;
}

double DotVector4(Vector4 v1, Vector4 v2) {
  double dot = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;
  return dot;
}

/* Cross Multiplication */
double CrossVector2(Vector2 v1, Vector2 v2) {
  return v1.x * v2.y - v2.x * v1.y;
}

Vector3 CrossVector3(Vector3 v1, Vector3 v2) {
  Vector3 cross;
  cross.x = v1.y * v2.z - v2.y * v1.z;
  cross.y = v1.x * v2.z - v2.x * v1.z;
  cross.z = v1.x * v2.y - v2.x * v1.z;

  return cross;
}

/* magnitude */
double SqrMagVector2(Vector2 v) {
  return (v.x * v.x + v.y * v.y);
}

double SqrMagVector3(Vector3 v) {
  return (v.x * v.x + v.y * v.y + v.z * v.z);
}

double SqrMagVector4(Vector4 v) {
  return (v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);
}

/* magnitude */
double MagVector2(Vector2 v) {
  return sqrt(SqrMagVector2(v));
}

double MagVector3(Vector3 v) {
  return sqrt(SqrMagVector3(v));
}

double MagVector4(Vector4 v) {
  return sqrt(SqrMagVector4(v));
}

/* normalize
   vector */
Vector2 NormVector2(Vector2 v) {
  Vector2 result;
  double mag = MagVector2(v);
  result.x = v.x / mag;
  result.y = v.y / mag;
  return result;
}

Vector3 NormVector3(Vector3 v) {
  Vector3 result;
  double mag = MagVector3(v);
  result.x = v.x / mag;
  result.y = v.y / mag;
  result.z = v.z / mag;
  return result;
}

Vector4 NormVector4(Vector4 v) {
  Vector4 result;
  double mag = MagVector4(v);
  result.x = v.x / mag;
  result.y = v.y / mag;
  result.z = v.z / mag;
  result.w = v.w / mag;
  return result;
}

/* Hadamard product */
Vector2 HadamardVector2(Vector2 v1, Vector2 v2) {
  Vector2 result = { .x = v1.x * v2.x, .y = v1.y * v2.y };
  return result;
}

Vector3 HadamardVector3(Vector3 v1, Vector3 v2) {
  Vector3 result = { .x = v1.x * v2.x, .y = v1.y * v2.y, .z = v1.z * v2.z };
  return result;
}

Vector4 HadamardVector4(Vector4 v1, Vector4 v2) {
  Vector4 result = { .x = v1.x * v2.x, .y = v1.y * v2.y, .z = v1.z * v2.z, .w = v1.w * v2.w };
  return result;
}

/* squared distance */
double SqrDistanceVector2(Vector2 v1, Vector2 v2) {
  return SqrMagVector2(SubVector2(v1, v2));
}

double SqrDistanceVector3(Vector3 v1, Vector3 v2) {
  return SqrMagVector3(SubVector3(v1, v2));
}

double SqrDistanceVector4(Vector4 v1, Vector4 v2) {
  return SqrMagVector4(SubVector4(v1, v2));
}

/* distance */
Vector2 DistanceVector2(Vector2 v1, Vector2 v2) {
  return MagVector2(SubVector2(v1, v2));
}

Vector3 DistanceVector3(Vector3 v1, Vector3 v2) {
  return MagVector3(SubVector3(v1, v2));
}

Vector4 DistanceVector4(Vector4 v1, Vector4 v2) {
  return MagVector4(SubVector4(v1, v2));
}

/* angle between vectors */
double AngleVector2(Vector2 v1, Vector2 v2) {
  return acos(DotVector2(v1, v2) / (MagVector2(v1) * MagVector2(v2)));
}

double AngleVector3(Vector3 v1, Vector3 v2) {
  return acos(DotVector3(v1, v2) / (MagVector3(v1) * MagVector3(v2)));
}

double AngleVector4(Vector4 v1, Vector4 v2) {
  return acos(DotVector4(v1, v2) / (MagVector4(v1) * MagVector4(v2)));
}
