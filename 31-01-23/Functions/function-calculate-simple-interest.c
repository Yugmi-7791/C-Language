#include <stdio.h>
int simpin (int a, int b, int c);
int
main ()
{
  int p, n;
  float r;
  p = 2000;
  r = 6.7;
  n = 2;
  printf ("Simple interest is: %d", simpin (p, r, n));
  return 0;
}

int
simpin (int a, int b, int c)
{
  int x = a * b * c / 100;
  return x;
}
