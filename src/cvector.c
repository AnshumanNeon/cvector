#include "cvector.h"

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
