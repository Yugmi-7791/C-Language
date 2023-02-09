#include <stdio.h>
void
main ()
{
  FILE *p;
  char ch;
  int ln = 0, t = 0, w = 0, c = 0;
  p = fopen ("text.txt", "r");
  ch = getc (p);
  while (ch != EOF)
    {
      if (ch == '\n')
	ln++;
      if (ch == '\t')
	t++;
      if (ch == ' ')
	w++;
      else
	c++;
      ch = getc (p);

    }
  fclose (p);
  printf ("Lines = %d, Tabs = %d, Words = %d , Characters = %d\n", ln, t, w,
	  c);
}
