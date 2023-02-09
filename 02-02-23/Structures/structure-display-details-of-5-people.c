#include <stdio.h>

struct people
{
  char name[10];
  int date;
  int salary;
};
int
main ()
{
  struct people people[5];
  int i;
  for (i = 0; i < 5; i++)
    {
      printf ("Enter your details %d\n", i + 1);
      printf ("Enter your name :");
      scanf ("%s", people[i].name);
      printf ("Enter your joining date :");
      scanf ("%d", &people[i].date);
      printf ("Enter your salary :");
      scanf ("%d", &people[i].salary);
    }

  for (i = 0; i < 5; i++)
    {
      printf ("Details of person %d :", i + 1);
      printf ("Person%d's name : %s\n", i + 1, people[i].name);
      printf ("Person%d's Date of joining : %d\n", i + 1, people[i].date);
      printf ("Person%d's salary : %d\n", i + 1, people[i].salary);
    }

  return 0;
}
