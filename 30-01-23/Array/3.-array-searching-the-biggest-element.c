#include <stdio.h>
int
main ()
{
  int n,i;
  double arr[10];
  printf ("Enter the number of elements in the array:");
  scanf ("%d", &n);

  for (i = 0; i < n; i++)
    {
      printf ("Enter number %d:", i + 1);
      scanf ("%lf", &arr[i]);
    }
  for(i=0;i<n;i++)
    {
      if(arr[0]<arr[i])
      {
        arr[0]=arr[i];
      }
      
    }
    printf("Smallest number in array is %lf",arr[0]);
    
    return 0;
}