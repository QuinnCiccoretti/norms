#include "Point.h"
// #include <math.h>
#include <cstdlib>
#include <random>
using namespace std;

Point::Point() {
  x = (double) rand() / RAND_MAX;
  y = (double) rand() / RAND_MAX;
}

Point::Point(float ix, float iy) {
  x = ix;
  y = iy;
}
