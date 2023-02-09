#include <stdio.h>

int sum (int n);
int
main ()
{
  int a, s, b;
  s = 1;
  printf ("Enter the last number to which you want addition:");
  scanf ("%d", &a);
  printf ("%d", sum (a));
  return 0;
}

int
sum (int n)
{
  int add = 0, i;
  for (i = 1; i <= n; i++)
    {
      add += i;
    }
  return add;
}
