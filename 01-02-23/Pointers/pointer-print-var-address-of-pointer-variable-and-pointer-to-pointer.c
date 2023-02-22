//Program to print var address of pointer variable and pointer to pointer.

#include <stdio.h>

int
main ()
{
  int a;//integer variable
  int *p;//pointer to variable
  int **pt;//pointer to pointer
  a = 32;
  p = &a;
  pt = &p;
  printf ("The value of variable is:%d\n", a);
  printf ("Value at *p=%d\n", *p);
  printf ("Value at **pt=%d\n", **pt);
  return 0;
}
