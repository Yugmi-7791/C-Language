//Program to print sum of numbers using pointer.

#include<stdio.h>

int Sum (int, int);//Defining function

int
main ()
{
  int a, b, rt;
  int (*ptr) (int, int)=Sum;
  printf ("Enter 1st number : ");
  scanf ("%d", &a);
  printf ("\nEnter 2nd number : ");
  scanf ("%d", &b);

  //printing sum using pointer
  printf ("\nThe sum is : %d", (ptr) (a, b));
  return 0;
}

int
Sum (int x, int y)
{
  return x + y;
}

