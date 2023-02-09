#include <stdio.h>
int swap (int a, int b);
int
main ()
{
  int n1, n2, x;
  printf ("Enter 2 numbers:");
  scanf ("%d %d", &n1, &n2);
  printf ("After swapping numbers are: ");
  swap (n1, n2);
  return 0;
}

int
swap (int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf ("%d and %d ", a, b);
  return 0;
}
