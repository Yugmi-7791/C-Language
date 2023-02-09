#include <stdio.h>
int
main ()
{
  int n,i,sum=0;
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
      sum+=arr[i];
    }
    printf("Sum of element is %d",sum);
  return 0;
}
