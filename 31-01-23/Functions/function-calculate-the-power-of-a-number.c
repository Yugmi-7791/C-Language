#include<stdio.h>

int power (int n, int p);
void
main ()
{
  int n, p, d;
  printf ("Enter number :");
  scanf ("%d", &n);
  printf ("Enter power :");
  scanf ("%d", &p);
  d = power (n, p);
  printf ("The power %d of %d is : %d", p, n, d);
}

int
power (int a, int b)
{
  int i = 1;
  while (b >= 1)
    {
      i = i * a;
      b--;
    }
  return i;
}
