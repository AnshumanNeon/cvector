#ifndef CVECTOR_MAIN_H
#include "base.h"
#include "errors.h"

/* vector initiliasation */
Vector2 GetVector2(CVECTOR_VALUE x, CVECTOR_VALUE y);
Vector3 GetVector3(CVECTOR_VALUE x, CVECTOR_VALUE y, CVECTOR_VALUE z);
Vector4 GetVector4(CVECTOR_VALUE x, CVECTOR_VALUE y, CVECTOR_VALUE z, CVECTOR_VALUE w);

/* Addition */
Vector2 AddVector2(Vector2 v1, Vector2 v2, int* returnCode);
Vector3 AddVector3(Vector3 v1, Vector3 v2, int* returnCode);
Vector4 AddVector4(Vector4 v1, Vector4 v2, int* returnCode);

/* Subtraction */
Vector2 SubVector2(Vector2 v1, Vector2 v2, int* returnCode);
Vector3 SubVector3(Vector3 v1, Vector3 v2, int* returnCode);
Vector4 SubVector4(Vector4 v1, Vector4 v2, int* returnCode);

/* Scalar Multiplcation */
Vector2 MulVector2D(Vector2 v, CVECTOR_VALUE x, int* returnCode);
Vector3 MulVector3D(Vector3 v, CVECTOR_VALUE x, int* returnCode);
Vector4 MulVector4D(Vector4 v, CVECTOR_VALUE x, int* returnCode);

/* Scalar Division */
Vector2 DivVector2D(Vector2 v, CVECTOR_VALUE x, int* returnCode);
Vector3 DivVector3D(Vector3 v, CVECTOR_VALUE x, int* returnCode);
Vector4 DivVector4D(Vector4 v, CVECTOR_VALUE x, int* returnCode);

/* Dot Product */
CVECTOR_VALUE DotVector2(Vector2 v1, Vector2 v2, int* returnCode);
CVECTOR_VALUE DotVector3(Vector3 v1, Vector3 v2, int* returnCode);
CVECTOR_VALUE DotVector4(Vector4 v1, Vector4 v2, int* returnCode);

/* Cross Product */
CVECTOR_VALUE CrossVector2(Vector2 v1, Vector2 v2, int* returnCode);
Vector3 CrossVector3(Vector3 v1, Vector3 v2, int* returnCode);

/* Squared magnitude */
CVECTOR_VALUE SqrMagVector2(Vector2 v, int* returnCode);
CVECTOR_VALUE SqrMagVector3(Vector3 v, int* returnCode);
CVECTOR_VALUE SqrMagVector4(Vector4 v, int* returnCode);

/* magnitude */
CVECTOR_VALUE MagVector2(Vector2 v, int* returnCode);
CVECTOR_VALUE MagVector3(Vector3 v, int* returnCode);
CVECTOR_VALUE MagVector4(Vector4 v, int* returnCode);

/* normalize vector */
Vector2 NormVector2(Vector2 v, int* returnCode);
Vector3 NormVector3(Vector3 v, int* returnCode);
Vector4 NormVector4(Vector4 v, int* returnCode);

/* hadamard product */
Vector2 HadamardVector2(Vector2 v1, Vector2 v2, int* returnCode);
Vector3 HadamardVector3(Vector3 v1, Vector3 v2, int* returnCode);
Vector4 HadamardVector4(Vector4 v1, Vector4 v2, int* returnCode);

/* squared distance */
CVECTOR_VALUE SqrDistanceVector2(Vector2 v1, Vector2 v2, int* returnCode);
CVECTOR_VALUE SqrDistanceVector3(Vector3 v1, Vector3 v2, int* returnCode);
CVECTOR_VALUE SqrDistanceVector4(Vector4 v1, Vector4 v2, int* returnCode);

/* distance */
CVECTOR_VALUE DistanceVector2(Vector2 v1, Vector2 v2, int* returnCode);
CVECTOR_VALUE DistanceVector3(Vector3 v1, Vector3 v2, int* returnCode);
CVECTOR_VALUE DistanceVector4(Vector4 v1, Vector4 v2, int* returnCode);

/* angle between vectors */
CVECTOR_VALUE AngleVector2(Vector2 v1, Vector2 v2, int* returnCode);
CVECTOR_VALUE AngleVector3(Vector3 v1, Vector3 v2, int* returnCode);
CVECTOR_VALUE AngleVector4(Vector4 v1, Vector4 v2, int* returnCode);

/* projection of v1 on v2 */
Vector2 ProjectionVector2(Vector2 v1, Vector2 v2, int* returnCode);
Vector3 ProjectionVector3(Vector3 v1, Vector3 v2, int* returnCode);
Vector4 ProjectionVector4(Vector4 v1, Vector4 v2, int* returnCode);

/* lerp */
CVECTOR_VALUE CVectorLerp(CVECTOR_VALUE a, CVECTOR_VALUE b, CVECTOR_VALUE t, int* returnCode);
Vector2 LerpVector2(Vector2 v1, Vector2 v2, CVECTOR_VALUE x, int* returnCode);
Vector3 LerpVector3(Vector3 v1, Vector3 v2, CVECTOR_VALUE x, int* returnCode);
Vector4 LerpVector4(Vector4 v1, Vector4 v2, CVECTOR_VALUE x, int* returnCode);

#define CVECTOR_MAIN_H
#endif
