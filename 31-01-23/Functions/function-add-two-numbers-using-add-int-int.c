#include <stdio.h>
int add (int x, int y);
int
main ()
{
  int a, b;
  a = 10;
  b = 15;
  printf ("Addition is = %d", add (a, b));
  return 0;
}

int
add (int x, int y)
{
  return x + y;
}
