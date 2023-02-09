#include <stdio.h>
#include <conio.h>
int uppercase (char[]);
int
main ()
{
  char c[10];
  printf ("Enter a string:");
  gets (c);
  uppercase (c);
  getch ();
  return 0;
}

int
uppercase (char a[10])
{
  int i;
  printf ("%s in upper case is:", a);
  for (i = 0; a[i]; i++)
    {
      if (a[i] > 96 && a[i] < 123)
	a[i] -= 32;
    }
  printf ("%s", a);
  return 0;
}
