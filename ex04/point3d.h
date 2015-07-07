#ifndef FOO2_H
#define FOO2_H

#include "point2d.h"

typedef struct point3D {
  union{
    struct point2D;
    point2D p2;
  };
  void *prvtPoint3D;
  int (*getZ) (struct point3D*);
  void (*setZ)(struct point3D*, int);
} point3D;



point3D* newPoint3D();
void deletePoint3D(point3D*);
#endif