#include "cvector.h"

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
  Vector2 new = { .x = v1.x * x, .y = v1.y * x };
  return new;
}

Vector3 MulVector3D(Vector3 v, double x) {
  Vector3 new = { .x = v1.x * x, .y = v1.y * x, .z = v1.z * x };
  return new;
}

Vector4 MulVector4D(Vector4 v, double x) {
  Vector4 new = { .x = v1.x * x, .y = v1.y * x, .z = v1.z * x, .w = v1.w * x };
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
