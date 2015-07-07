#include "points.h"
#include <math.h>

double length2D(point2D *p) {
  int x = p->getX(p);
  int y = p->getY(p);
  return sqrt(x*x + y*y);
}

double length3D(point3D *p) {
  int x = p->getX(&p->p2);
  int y = p->getY(&p->p2);
  int z = p->getZ(p);
  return sqrt(x*x + y*y + z*z);
}
