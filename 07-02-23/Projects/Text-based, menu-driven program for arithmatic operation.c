#include <stdio.h>
int add (int a, int b);
int sub (int a, int b);
int mul (int a, int b);
int div (int a, int b);

int
main ()
{
  int a, n1, n2;
  int (*ptr1) (int, int) = add;
  int (*ptr2) (int, int) = sub;
  int (*ptr3) (int, int) = mul;
  int (*ptr4) (int, int) = div;

  printf ("Which arithmetic operation you want to choose : \n");
  printf
    ("Press 1 for Addition... \nPress 2 for Subtraction... \nPress 3 for Multiplication... \nPress 4 for Division... \n");
  scanf ("%d", &a);
  printf ("You entered %d", a);

  printf ("\n\nEnter 2 numbers : ");
  scanf ("%d %d", &n1, &n2);
  printf ("\nYou entered numbers : %d and %d\n", n1, n2);

  switch (a)
    {
    case 1:
      printf ("Sum of numbers %d and %d is : %d \n", n1, n2, ptr1 (n1, n2));
      break;
    case 2:
      printf ("Subtraction of numbers %d and %d is : %d \n", n1, n2,
	      ptr2 (n1, n2));
      break;
    case 3:
      printf ("Multiplication of numbers %d and %d is : %d \n", n1, n2,
	      ptr3 (n1, n2));
      break;
    case 4:
      printf ("Division of numbers %d and %d is : %d \n", n1, n2,
	      ptr4 (n1, n2));
      break;
    default:
      printf ("Choose valid operation.!!");
      break;
    }
  return 0;
}

int
add (int a, int b)
{
  return a + b;
}

int
sub (int a, int b)
{
  return a - b;
}

int
mul (int a, int b)
{
  return a * b;
}

int
div (int a, int b)
{
  return a / b;
}
