//Program to copy a given file.

#include <stdio.h>

int
main ()
{
  FILE *fp1, *fp2;
  char ch;
  fp1 = fopen ("f1.c", "r");
  fp2 = fopen ("f2.c", "w");
  do
    {
      ch = getc (fp1);
      putc (ch, fp2);//copy contents of fp1 to fp2.
    }
  while (ch != EOF);
  fclose (fp1);
  fclose (fp2);
  printf ("File copied...");
  return 0;
}
