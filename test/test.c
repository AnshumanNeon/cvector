#include "cvector.h"
#include <stdio.h>

int main() {
  Vector2 v1 = { .x = 1, .y = 2 };
  Vector2 v2 = { .x = 2, .y = 2 };
  printf("Hello, %Lf!", AddVector2(v1, v2).x);
  return 0;
}
