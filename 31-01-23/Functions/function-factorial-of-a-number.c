#include <stdio.h>

int fact (int a);

int
main ()
{
  int n;
  printf ("Enter the num:");
  scanf ("%d", &n);
  printf ("%d", fact (n));

  return 0;
}

int
fact (int a)
{
  int i, fact = 1;
  for (i = 1; i <= a; i++)
    {
      fact = fact * i;
    }
  return fact;
}
