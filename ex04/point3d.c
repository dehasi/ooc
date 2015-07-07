#include <stdlib.h>
#include "point3d.h"
typedef struct private {
  int z;
} private;

static int getz(struct point3D*p) {
   return ((struct private*)(p->prvtPoint3D))->z;
}
static void setz(struct point3D *p, int val) {
    ((struct private*)(p->prvtPoint3D))->z = val;
}


point3D* newPoint3D()  {
  point3D* ptr;
  ptr = (point3D*) malloc(sizeof(point3D));
  ptr->p2 = *newPoint2D();
  ptr -> prvtPoint3D = malloc(sizeof(private));

  ptr -> getZ = &getz;
  ptr -> setZ = &setz;

  ((private*)(ptr -> prvtPoint3D)) -> z = 3;

  return ptr;
}

void deletePoint3D(point3D* ptr) {
  free(ptr->prvtPoint3D);
  free(ptr);
}
