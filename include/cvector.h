#ifndef CVECTOR_H

typedef struct Vector {
  float x, y, z;
} Vector;

Vector add(Vector v1, Vector v2);

#define CVECTOR_H
#endif
