#include "cvector.h"

Vector add(Vector v1, Vector v2) {
  Vector new = { .x = v1.x + v2.x, .y = v1.y + v2.y, .z = v1.z + v2.z };
  return new;
}
