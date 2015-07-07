#include <stdio.h>
#include "point3d.h"

int main() {
  printf("hello world\n");
  point3D *a = newPoint3D();
  int e = a->getX(&a->p2);
  printf("e = %d\n", e);

  a->setX(&a->p2, 42);
  e = a->getX(&a->p2);
  printf("e = %d\n", e);
  deletePoint3D(a);
  return 0;
}