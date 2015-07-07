#ifndef POINTS_H
#define POINTS_H

#include "point2d.h"
#include "point3d.h"

double length2D(point2D *p);
double length3D(point3D *p); 

  
#define length(X) _Generic((X), \
  point3D* : length3D, \
  point2D* : length2D \
) (X)
    
#define typename(x) _Generic((x), \
  point3D   : "point3D", \
  point2D   : "point2D", \
  point3D * : "pointer to point3D", \
  point2D * : "pointer to point2D"  \
)

#endif