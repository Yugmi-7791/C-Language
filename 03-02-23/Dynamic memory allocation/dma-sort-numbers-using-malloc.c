#include<stdio.h>
#include<stdlib.h>
void
main ()
{
  int i, j, t, n;
  int *p;
  printf ("Enter value of n: ");
  scanf ("%d", &n);
  p = (int *) malloc (n * sizeof (int));
  printf ("Enter values\n");
  for (i = 0; i < n; i++)
    scanf ("%d", &p[i]);
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
	{
	  if (p[i] > p[j])
	    {
	      t = p[i];
	      p[i] = p[j];
	      p[j] = t;
	    }
	}
    }

  printf ("Ascending order :\n");
  for (i = 0; i < n; i++)
    printf ("%d\n", p[i]);
  free (p);
}
