#include <stdio.h>

struct student
{
  char name[10];
  int roll;
  float CPI;
  int backlog;
};
int
main ()
{
  struct student student[2];
  int i;
  for (i = 0; i < 2; i++)
    {
      printf ("Enter student%d name:", i + 1);
      scanf ("%s", &student[i].name);
      printf ("Enter student%d roll number:", i + 1);
      scanf ("%d", &student[i].roll);
      printf ("Enter student%d CPI:", i + 1);
      scanf ("%f", &student[i].CPI);
      printf ("Enter student%d number of backlogs:", i + 1);
      scanf ("%d", &student[i].backlog);
    }

  for (i = 0; i < 2; i++)
    {
      printf ("Student%d's name:%s\n", i + 1, student[i].name);
      printf ("Student%d's roll num:%d\n", i + 1, student[i].roll);
      printf ("Student%d's CPI:%f\n", i + 1, student[i].CPI);
      printf ("Student%d's backlog:%d\n", i + 1, student[i].backlog);
    }

  return 0;
}
