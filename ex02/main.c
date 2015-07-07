#include <stdio.h>
#include "point2d.h"

int main() {
  printf("hello world\n");
  point2D *a = newPoint2D();
  int e = a->getX(a);
  printf("e = %d\n", e);

  a->setX(a, 42);
  e = a->getX(a);
  printf("e = %d\n", e);
  deletePoint2D(a);
  return 0;
}