#include <stdio.h>
int power (int n, int p);
int
main ()
{
  int n, pow, i;
  printf ("Enter any number : ");
  scanf ("%d", &n);
  printf ("Enter power of number : ");
  scanf ("%d", &pow);
  i = power (n, pow);
  printf ("%d's power %d = %d", n, pow, i);
}

int
power (int n, int p)
{
  int r = 1;
  while (p >= 1)
    {
      r = r * n;
      p--;
    }
  return r;

}
