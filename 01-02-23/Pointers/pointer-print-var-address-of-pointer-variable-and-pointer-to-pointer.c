#include <stdio.h>

int
main ()
{
  int a;
  int *p;
  int **pt;
  a = 32;
  p = &a;
  pt = &p;
  printf ("The value of variable is:%d\n", a);
  printf ("Value at *p=%d\n", *p);
  printf ("Value at **pt=%d\n", **pt);
  return 0;
}
