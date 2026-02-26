#include "cvector.h"
#include <stdio.h>
#include <float.h>

int main() {
  Vector2 v1 = UnitXVector2;
  /* Vector2 v2 = { .x = 123.1223, .y = 2 }; */
  int error_code = -10;
  printf("Hello, %Lf!\n", DivVector2D(v1, 1, &error_code).x);
  printf("error code: %d", error_code);
  return 0;
}
