#include <stdio.h>

int
fact (int n)
{
  int fact = 1;
  if (n == 0)
    printf ("1");
  for (int i = 2; i <= n; i++)
    fact = fact * i;
  return fact;
}

int
nCr (int n, int r)
{
  int factorial = fact (n) / (fact (r) * fact (n - r));
  return factorial;
}

int
main ()
{
  int n, r;
  printf ("Enter the value of n and r :");
  scanf ("%d %d", &n, &r);
  printf ("You entered : n = %d r = %d \n", n, r);
  printf ("Value of nCr is : %d ", nCr (n, r));
  return 0;
}
