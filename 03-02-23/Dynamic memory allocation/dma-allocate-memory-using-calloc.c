#include <stdio.h>
#include <stdlib.h>
int
main ()
{
  int i, n;
  int *fp;
  printf ("Enter how many numbers:");
  scanf ("%d", &n);
  fp = (int *) calloc (n, sizeof (int));
  for (i = 0; i < n; i++)
    {
      scanf ("%d", (fp + i));
    }

  free (fp);

  return 0;
}
