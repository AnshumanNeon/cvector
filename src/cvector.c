#include "cvector.h"
#include <math.h>

/* vector initialization */
Vector2 GetVector2(double x, double y) {
  Vector2 result = { .x = x, .y = y };
  return result;
}

Vector3 GetVector3(double x, double y, double z) {
  Vector3 result = { .x = x, .y = y, .z = z };
  return result;
}

Vector4 GetVector4(double x, double y, double z, double w) {
  Vector4 result = { .x = x, .y = y, .z = z, .w = w };
  return result;
}

/* Addition */
Vector2 AddVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  Vector2 new = { .x = v1.x + v2.x, .y = v1.y + v2.y };
  *returnCode = GetErrorCode();
  return new;
}

Vector3 AddVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  Vector3 new = { .x = v1.x + v2.x, .y = v1.y + v2.y, .z = v1.z + v2.z };
  *returnCode = GetErrorCode();
  return new;
}

Vector4 AddVector4(Vector4 v1, Vector4 v2, int* returnCode) {
  Vector4 new = { .x = v1.x + v2.x, .y = v1.y + v2.y, .z = v1.z + v2.z, .w = v1.w + v2.w };
  *returnCode = GetErrorCode();
  return new;
}

/* Subtraction */
Vector2 SubVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  Vector2 new = { .x = v1.x - v2.x, .y = v1.y - v2.y };
  *returnCode = GetErrorCode();
  return new;
}

Vector3 SubVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  Vector3 new = { .x = v1.x - v2.x, .y = v1.y - v2.y, .z = v1.z - v2.z };
  *returnCode = GetErrorCode();
  return new;
}

Vector4 SubVector4(Vector4 v1, Vector4 v2, int* returnCode) {
  Vector4 new = { .x = v1.x - v2.x, .y = v1.y - v2.y, .z = v1.z - v2.z, .w = v1.w - v2.w };
  *returnCode = GetErrorCode();
  return new;
}

/* Scalar Multiplication */
Vector2 MulVector2D(Vector2 v, double x, int* returnCode) {
  Vector2 new = { .x = v.x * x, .y = v.y * x };
  *returnCode = GetErrorCode();
  return new;
}

Vector3 MulVector3D(Vector3 v, double x, int* returnCode) {
  Vector3 new = { .x = v.x * x, .y = v.y * x, .z = v.z * x };
  *returnCode = GetErrorCode();
  return new;
}

Vector4 MulVector4D(Vector4 v, double x, int* returnCode) {
  Vector4 new = { .x = v.x * x, .y = v.y * x, .z = v.z * x, .w = v.w * x };
  *returnCode = GetErrorCode();
  return new;
}

/* Scalar Divison */
Vector2 DivVector2D(Vector2 v, double x, int* returnCode) {
  double inv_x = 1/x;
  *returnCode = GetErrorCode();
  return MulVector2D(v, inv_x);
}

Vector3 DivVector3D(Vector3 v, double x, int* returnCode) {
  double inv_x = 1/x;
  *returnCode = GetErrorCode();
  return MulVector3D(v, inv_x);
}

Vector4 DivVector4D(Vector4 v, double x, int* returnCode) {
  double inv_x = 1/x;
  *returnCode = GetErrorCode();
  return MulVector4D(v, inv_x);
}

/* Dot Product */
double DotVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  double dot = v1.x * v2.x + v1.y * v2.y;
  *returnCode = GetErrorCode();
  return dot;
}

double DotVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  double dot = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
  *returnCode = GetErrorCode();
  return dot;
}

double DotVector4(Vector4 v1, Vector4 v2, int* returnCode) {
  double dot = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;
  *returnCode = GetErrorCode();
  return dot;
}

/* Cross Multiplication */
double CrossVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  return v1.x * v2.y - v2.x * v1.y;
}

Vector3 CrossVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  Vector3 cross;
  cross.x = v1.y * v2.z - v2.y * v1.z;
  cross.y = v1.x * v2.z - v2.x * v1.z;
  cross.z = v1.x * v2.y - v2.x * v1.z;

  *returnCode = GetErrorCode();

  return cross;
}

/* magnitude */
double SqrMagVector2(Vector2 v, int* returnCode) {
  return (v.x * v.x + v.y * v.y);
}

double SqrMagVector3(Vector3 v, int* returnCode) {
  return (v.x * v.x + v.y * v.y + v.z * v.z);
}

double SqrMagVector4(Vector4 v, int* returnCode) {
  return (v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);
}

/* magnitude */
double MagVector2(Vector2 v, int* returnCode) {
  return sqrt(SqrMagVector2(v));
}

double MagVector3(Vector3 v, int* returnCode) {
  return sqrt(SqrMagVector3(v));
}

double MagVector4(Vector4 v, int* returnCode) {
  return sqrt(SqrMagVector4(v));
}

/* normalize
   vector */
Vector2 NormVector2(Vector2 v, int* returnCode) {
  Vector2 result;
  double mag = MagVector2(v);
  result.x = v.x / mag;
  result.y = v.y / mag;

  *returnCode = GetErrorCode();
  return result;
}

Vector3 NormVector3(Vector3 v, int* returnCode) {
  Vector3 result;
  double mag = MagVector3(v);
  result.x = v.x / mag;
  result.y = v.y / mag;
  result.z = v.z / mag;

  *returnCode = GetErrorCode();
  return result;
}

Vector4 NormVector4(Vector4 v, int* returnCode) {
  Vector4 result;
  double mag = MagVector4(v);
  result.x = v.x / mag;
  result.y = v.y / mag;
  result.z = v.z / mag;
  result.w = v.w / mag;

  *returnCode = GetErrorCode();
  return result;
}

/* Hadamard product */
Vector2 HadamardVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  Vector2 result = { .x = v1.x * v2.x, .y = v1.y * v2.y };
  *returnCode = GetErrorCode();
  return result;
}

Vector3 HadamardVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  Vector3 result = { .x = v1.x * v2.x, .y = v1.y * v2.y, .z = v1.z * v2.z };
  *returnCode = GetErrorCode();
  return result;
}

Vector4 HadamardVector4(Vector4 v1, Vector4 v2, int* returnCode) {
  Vector4 result = { .x = v1.x * v2.x, .y = v1.y * v2.y, .z = v1.z * v2.z, .w = v1.w * v2.w };
  *returnCode = GetErrorCode();
  return result;
}

/* squared distance */
double SqrDistanceVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  return SqrMagVector2(SubVector2(v1, v2));
}

double SqrDistanceVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  return SqrMagVector3(SubVector3(v1, v2));
}

double SqrDistanceVector4(Vector4 v1, Vector4 v2, int* returnCode) {
  return SqrMagVector4(SubVector4(v1, v2));
}

/* distance */
double DistanceVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  return MagVector2(SubVector2(v1, v2));
}

double DistanceVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  return MagVector3(SubVector3(v1, v2));
}

double DistanceVector4(Vector4 v1, Vector4 v2, int* returnCode) {
  return MagVector4(SubVector4(v1, v2));
}

/* angle between vectors */
double AngleVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  return acos(DotVector2(v1, v2) / (MagVector2(v1) * MagVector2(v2)));
}

double AngleVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  return acos(DotVector3(v1, v2) / (MagVector3(v1) * MagVector3(v2)));
}

double AngleVector4(Vector4 v1, Vector4 v2, int* returnCode) {
  return acos(DotVector4(v1, v2) / (MagVector4(v1) * MagVector4(v2)));
}

/* projection of v1 on v2 */
Vector2 ProjectionVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  return MulVector2D(v2, (DotVector2(v1, v2) / MagVector2(v2)));
}

Vector3 ProjectionVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  return MulVector3D(v2, (DotVector3(v1, v2) / MagVector3(v2)));
}

Vector4 ProjectionVector4(Vector4 v1, Vector4 v2, int* returnCode) {
  return MulVector4D(v2, (DotVector4(v1, v2) / MagVector4(v2)));
}

/* lerp */
Vector2 LerpVector2(Vector2 v1, Vector2 v2, double x, int* returnCode) {
  return GetVector2(Lerp(v1.x, v2.x, x), Lerp(v1.y, v2.y, x));
}

Vector3 LerpVector3(Vector3 v1, Vector3 v2, double x, int* returnCode) {
  return GetVector3(Lerp(v1.x, v2.x, x), Lerp(v1.y, v2.y, x), Lerp(v1.z, v2.z, x));
}

Vector4 LerpVector4(Vector4 v1, Vector4 v2, double x, int* returnCode) {
  return GetVector4(Lerp(v1.x, v2.x, x), Lerp(v1.y, v2.y, x), Lerp(v1.z, v2.z, x), Lerp(v1.w, v2.w, x));
}
