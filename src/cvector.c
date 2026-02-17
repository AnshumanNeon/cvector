#include "cvector.h"
#include <math.h>

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
double MagVector2(Vector2 v) {
  return sqrt(v.x * v.x + v.y * v.y);
}

double MagVector3(Vector3 v) {
  return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

double MagVector4(Vector4 v) {
  return sqrt(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);
}

/* unit vector */
Vector2 UnitVector2(Vector2 v) {
  Vector2 result;
  double mag = MagVector2(v);
  result.x = v.x / mag;
  result.y = v.y / mag;
  return result;
}

Vector3 UnitVector3(Vector3 v) {
  Vector3 result;
  double mag = MagVector3(v);
  result.x = v.x / mag;
  result.y = v.y / mag;
  result.z = v.z / mag;
  return result;
}

Vector4 UnitVector4(Vector4 v) {
  Vector4 result;
  double mag = MagVector4(v);
  result.x = v.x / mag;
  result.y = v.y / mag;
  result.z = v.z / mag;
  result.w = v.w / mag;
  return result;
}
