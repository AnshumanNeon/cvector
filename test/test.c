#include "cvector.h"
#include <stdio.h>
#include <float.h>

int main() {
  Vector2 v1 = { .x = 12, .y = 2 };
  Vector2 v2 = { .x = 123.1223, .y = 2 };
  int error_code = -10;
  printf("Hello, %Lf!\n", AddVector2(v1, v2, &error_code).x);
  printf("error code: %d", error_code);
  return 0;
}
