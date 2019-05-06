#include <stdio.h>

#include "Generated.h"

int main(int argc, char const *argv[]) {
  const double x = 1.2;
  const double y = 2.1;

  const auto res = simianquant::ext::Generated::apply(x, y);

  printf("a: %g, b: %g, c: %g\n", res.getA(), res.getB(), res.getC());
  printf("ho gaya\n");

  return 0;
}