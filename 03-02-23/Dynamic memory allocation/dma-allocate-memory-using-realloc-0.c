#include <stdio.h>
void
main ()
{
  int *fp;
  fp = (int *) malloc (sizeof (int));
  *fp = 25;
  fp = (int *) realloc (fp, 2 * sizeof (int));
  printf ("%d", *fp);
  free (fp);
}
