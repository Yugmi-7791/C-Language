#include <stdio.h>
int swap (int *a, int *b);
int
main ()
{
  int a, b;
  int *p1, *p2;
  p1 = &a;
  p2 = &b;
  printf ("Enter 2 numbers:");
  scanf ("%d %d", &a, &b);
  swap (&a, &b);
  printf ("After swapping numbers are : %d %d", *p1, *p2);
  return 0;
}

int
swap (int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
  return *a, *b;
}
