#include<stdio.h>
#include<string.h>

int binary (int x);
int reverse (int y);
int a[10];

int
main ()
{
  int n;
  printf ("Enter integer number : ");
  scanf ("%d", &n);
  printf ("You enterd : %d\n", n);

  printf ("\nBinary Number of a Given Number is :  ");
  binary (n);

  printf ("\nReverse bits of Given Number is :  ");
  reverse (n);

  return 0;
}

int
binary (int x)
{
  int i, j;
  for (i = 0; x > 0; i++)
    {
      a[i] = x % 2;
      x = x / 2;
    }
  for (j = i - 1; j >= 0; j--)
    {
      printf (" %d ", a[j]);
    }
  return 0;
}

int
reverse (int y)
{
  int i, j;
  for (i = 0; y > 0; i++)
    {
      a[i] = y % 2;
      y = y / 2;
      printf (" %d ", a[i]);
    }
  return 0;
}

