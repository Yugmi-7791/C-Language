#include <stdio.h>

void
main ()
{
  FILE *fp;
  char ch;
  fp = fopen ("f1.c", "r");
  do
    {
      ch = getc (fp);
      putchar (fp);
    }
  while (ch != EOF);
  fclose (fp);
}
