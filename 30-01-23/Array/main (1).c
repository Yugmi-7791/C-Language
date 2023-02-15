#include <stdio.h>

int
main ()
{
  int n, i;
  int arr[10];
  printf ("Enter the number of elements in the array:");
  scanf ("%d", &n);

  for (i = 0; i < n; i++)
    {
      printf ("Enter element : %d", i + 1);
      scanf ("%d", &arr[i]);
    }

  printf ("Reversed elements of array are :");
  for (i = n; i > 0; i--)
    {
      printf (" %d ", arr[i - 1]);
    }

  return 0;
}
