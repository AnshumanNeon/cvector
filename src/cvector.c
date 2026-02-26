#include "cvector.h"
#include <math.h>

/* vector initialization */
Vector2 GetVector2(CVECTOR_VALUE x, CVECTOR_VALUE y) {
  Vector2 result = { .x = x, .y = y };
  return result;
}

Vector3 GetVector3(CVECTOR_VALUE x, CVECTOR_VALUE y, CVECTOR_VALUE z) {
  Vector3 result = { .x = x, .y = y, .z = z };
  return result;
}

Vector4 GetVector4(CVECTOR_VALUE x, CVECTOR_VALUE y, CVECTOR_VALUE z, CVECTOR_VALUE w) {
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
Vector2 MulVector2D(Vector2 v, CVECTOR_VALUE x, int* returnCode) {
  Vector2 new = { .x = v.x * x, .y = v.y * x };
  *returnCode = GetErrorCode();
  return new;
}

Vector3 MulVector3D(Vector3 v, CVECTOR_VALUE x, int* returnCode) {
  Vector3 new = { .x = v.x * x, .y = v.y * x, .z = v.z * x };
  *returnCode = GetErrorCode();
  return new;
}

Vector4 MulVector4D(Vector4 v, CVECTOR_VALUE x, int* returnCode) {
  Vector4 new = { .x = v.x * x, .y = v.y * x, .z = v.z * x, .w = v.w * x };
  *returnCode = GetErrorCode();
  return new;
}

/* Scalar Divison */
Vector2 DivVector2D(Vector2 v, CVECTOR_VALUE x, int* returnCode) {
  CVECTOR_VALUE inv_x = 1/x;
  return MulVector2D(v, inv_x, returnCode);
}

Vector3 DivVector3D(Vector3 v, CVECTOR_VALUE x, int* returnCode) {
  CVECTOR_VALUE inv_x = 1/x;
  return MulVector3D(v, inv_x, returnCode);
}

Vector4 DivVector4D(Vector4 v, CVECTOR_VALUE x, int* returnCode) {
  CVECTOR_VALUE inv_x = 1/x;
  return MulVector4D(v, inv_x, returnCode);
}

/* Dot Product */
CVECTOR_VALUE DotVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  CVECTOR_VALUE dot = v1.x * v2.x + v1.y * v2.y;
  return dot;
}

CVECTOR_VALUE DotVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  CVECTOR_VALUE dot = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
  return dot;
}

CVECTOR_VALUE DotVector4(Vector4 v1, Vector4 v2, int* returnCode) {
  CVECTOR_VALUE dot = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;
  return dot;
}

/* Cross Multiplication */
CVECTOR_VALUE CrossVector2(Vector2 v1, Vector2 v2, int* returnCode) {
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
CVECTOR_VALUE SqrMagVector2(Vector2 v, int* returnCode) {
  CVECTOR_VALUE result = (v.x * v.x + v.y * v.y);
  *returnCode = GetErrorCode();
  return result;
}

CVECTOR_VALUE SqrMagVector3(Vector3 v, int* returnCode) {
  CVECTOR_VALUE result = (v.x * v.x + v.y * v.y + v.z * v.z);
  *returnCode = GetErrorCode();
  return result;
}

CVECTOR_VALUE SqrMagVector4(Vector4 v, int* returnCode) {
  CVECTOR_VALUE result = (v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w);
  *returnCode = GetErrorCode();
  return result;
}

/* magnitude */
CVECTOR_VALUE MagVector2(Vector2 v, int* returnCode) {
  CVECTOR_VALUE result = sqrt(SqrMagVector2(v, returnCode));
  *returnCode = GetErrorCode();
  return result;
}

CVECTOR_VALUE MagVector3(Vector3 v, int* returnCode) {
  CVECTOR_VALUE result = sqrt(SqrMagVector3(v, returnCode));
  *returnCode = GetErrorCode();
  return result;
}

CVECTOR_VALUE MagVector4(Vector4 v, int* returnCode) {
  CVECTOR_VALUE result = sqrt(SqrMagVector4(v, returnCode));
  *returnCode = GetErrorCode();
  return result;
}

/* normalize vector */
Vector2 NormVector2(Vector2 v, int* returnCode) {
  CVECTOR_VALUE mag = MagVector2(v, returnCode);
  Vector2 result = DivVector2D(v, mag, returnCode);
  return result;
}

Vector3 NormVector3(Vector3 v, int* returnCode) {
  CVECTOR_VALUE mag = MagVector3(v, returnCode);
  Vector3 result = DivVector3D(v, mag, returnCode);
  return result;
}

Vector4 NormVector4(Vector4 v, int* returnCode) {
  CVECTOR_VALUE mag = MagVector4(v, returnCode);
  Vector4 result = DivVector4D(v, mag, returnCode);
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
CVECTOR_VALUE SqrDistanceVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  return SqrMagVector2(SubVector2(v1, v2, returnCode), returnCode);
}

CVECTOR_VALUE SqrDistanceVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  return SqrMagVector3(SubVector3(v1, v2, returnCode), returnCode);
}

CVECTOR_VALUE SqrDistanceVector4(Vector4 v1, Vector4 v2, int* returnCode) {
  return SqrMagVector4(SubVector4(v1, v2, returnCode), returnCode);
}

/* distance */
CVECTOR_VALUE DistanceVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  return MagVector2(SubVector2(v1, v2, returnCode), returnCode);
}

CVECTOR_VALUE DistanceVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  return MagVector3(SubVector3(v1, v2, returnCode), returnCode);
}

CVECTOR_VALUE DistanceVector4(Vector4 v1, Vector4 v2, int* returnCode) {
  return MagVector4(SubVector4(v1, v2, returnCode), returnCode);
}

/* angle between vectors */
CVECTOR_VALUE AngleVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  return acos(DotVector2(v1, v2, returnCode) / (MagVector2(v1, returnCode) * MagVector2(v2, returnCode)));
}

CVECTOR_VALUE AngleVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  return acos(DotVector3(v1, v2, returnCode) / (MagVector3(v1, returnCode) * MagVector3(v2, returnCode)));
}

CVECTOR_VALUE AngleVector4(Vector4 v1, Vector4 v2, int* returnCode) {
  return acos(DotVector4(v1, v2, returnCode) / (MagVector4(v1, returnCode) * MagVector4(v2, returnCode)));
}

/* projection of v1 on v2 */
Vector2 ProjectionVector2(Vector2 v1, Vector2 v2, int* returnCode) {
  return MulVector2D(v2, (DotVector2(v1, v2, returnCode) / MagVector2(v2, returnCode)), returnCode);
}

Vector3 ProjectionVector3(Vector3 v1, Vector3 v2, int* returnCode) {
  return MulVector3D(v2, (DotVector3(v1, v2, returnCode) / MagVector3(v2, returnCode)), returnCode);
}

Vector4 ProjectionVector4(Vector4 v1, Vector4 v2, int* returnCode) {
  return MulVector4D(v2, (DotVector4(v1, v2, returnCode) / MagVector4(v2, returnCode)), returnCode);
}

/* lerp */
CVECTOR_VALUE Lerp(CVECTOR_VALUE a, CVECTOR_VALUE b, CVECTOR_VALUE t, int* returnCode) {
  CVECTOR_VALUE result = a * (1 - t) + t * b;
  *returnCode = GetErrorCode();
  return result;
}

Vector2 LerpVector2(Vector2 v1, Vector2 v2, CVECTOR_VALUE x, int* returnCode) {
  return GetVector2(Lerp(v1.x, v2.x, x, returnCode), Lerp(v1.y, v2.y, x, returnCode));
}

Vector3 LerpVector3(Vector3 v1, Vector3 v2, CVECTOR_VALUE x, int* returnCode) {
  return GetVector3(Lerp(v1.x, v2.x, x, returnCode), Lerp(v1.y, v2.y, x, returnCode), Lerp(v1.z, v2.z, x, returnCode));
}

Vector4 LerpVector4(Vector4 v1, Vector4 v2, CVECTOR_VALUE x, int* returnCode) {
  return GetVector4(Lerp(v1.x, v2.x, x, returnCode), Lerp(v1.y, v2.y, x, returnCode), Lerp(v1.z, v2.z, x, returnCode), Lerp(v1.w, v2.w, x, returnCode));
}
