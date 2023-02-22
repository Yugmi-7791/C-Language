//Program to perform arithmetic operations on elements of an array using pointer.
//Program to print address of array element and data at address of element.

#include <stdio.h>

//Defining function to perform substraction on two elements of array.
int
sub (int *a, int *b)
{
  return *a - *b;
}

//Defining function to perform swaping on two elements of array.
int
swap (int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
  return *a, *b;
}

int
main ()
{
  int i, arr[5], sum = 0, mul = 1;
  int *p[i];
  for (i = 0; i < 5; i++)
    {
      printf ("Enter array element %d:", i + 1);
      scanf ("%d", &arr[i]);
    }
  printf ("You entered:\n");
  for (i = 0; i < 5; i++)
    {
      printf ("arr[%d]= %d\n", i + 1, *(arr + i));
    }

  for (i = 0; i < 5; i++)
    {
      p[i] = &arr[i];
      printf ("The address of array element %d is: %p\n", i + 1, p[i]);	 //Printing address of array element
      printf ("The data at adddress of element %d is: %d\n", i + 1, *p[i]);  //Printing the data at address of element
    }

  //Swaping of two numbers of array.
  p[2] = &arr[2];
  p[3] = &arr[3];
  printf ("Before swapping");
  printf ("Number 1: %d and Number 2: %d\n", *p[2], *p[3]);
  printf ("After swapping");
  swap (&arr[2], &arr[3]);
  printf ("Number 1: %d and Number 2: %d\n", *p[2], *p[3]);

  //printing sum of entered elements of array.
  for (i = 0; i < 5; i++)
    {
      sum += arr[i];
      mul *= arr[i];
    }
  printf ("Sum of numbers is: %d\n", sum);
  printf ("Multiplication of numbers is: %d\n", mul);

  printf ("Substraction of numbers %d and %d is: %d\n", *p[2], *p[3],
	  sub (&arr[2], &arr[3]));  //calling function.

  return 0;
}
