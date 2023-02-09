#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int i, n, sum;
  int *p;
  printf ("How many numbers you want to add :");
  scanf ("%d", &n);
  p = (int *) calloc (n, sizeof (int));
  printf ("Enter the num you want to add :\n");
  for (i = 1; i <= n; i++)
    scanf ("%d", &p[i]);
  for (i = 1; i <= n; i++)
    {
      sum += p[i];

    }
  printf ("Sum of entered numbers is : %d", sum);
  free (p);


  return 0;
}
