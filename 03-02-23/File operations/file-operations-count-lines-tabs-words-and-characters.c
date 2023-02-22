//Program to count lines,tabs,words and character.

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
      if (ch == '\n')//count lines
	ln++;
      if (ch == '\t')//count tabs
	t++;
      if (ch == ' ')//count words
	w++;
      else
	c++;//count characters
      ch = getc (p);

    }
  fclose (p);
  printf ("Lines = %d, Tabs = %d, Words = %d , Characters = %d\n", ln, t, w,
	  c);
}
