#include <stdio.h>
struct student
{
  char name[20];
  int rollno;
  float cpi;
};

int
main ()
{
  struct student student1, *studptr;
  studptr = &student1;
  printf ("Enter student1 name:");
  scanf ("%s", studptr->name);
  printf ("Enter student1 roll number:");
  scanf ("%d", &studptr->rollno);
  printf ("Enter student1 CPI:");
  scanf ("%f", &studptr->cpi);

  printf ("Student details");
  printf ("name:%s\n", studptr->name);
  printf ("rollno:%d\n", studptr->rollno);
  printf ("cpi:%f\n", studptr->cpi);
  return 0;
}
