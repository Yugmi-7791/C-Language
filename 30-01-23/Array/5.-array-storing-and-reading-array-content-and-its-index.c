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
      printf ("Enter number %d:", i + 1);
      scanf ("%d", &arr[i]);
    }
  for (i = 0; i < n; i++)
    {
      printf ("arr[%d]=%d\n", i + 1, arr[i]);

    }
  return 0;
}

