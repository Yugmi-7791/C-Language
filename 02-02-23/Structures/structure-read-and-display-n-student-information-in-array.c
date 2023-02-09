#include<stdio.h>
struct student
{
  char name[20];
  int rollno;
  float cpi;
};

int
main ()
{
  int i, n;
  printf ("Enter how many records u want to store : ");
  scanf ("%d", &n);
  struct student sarr[n];
  for (i = 0; i < n; i++)
    {
      printf ("\nEnter %d record : \n", i + 1);
      printf ("Enter Name : ");
      scanf ("%s", sarr[i].name);
      printf ("Enter RollNo. : ");
      scanf ("%d", &sarr[i].rollno);
      printf ("Enter CPI : ");
      scanf ("%f", &sarr[i].cpi);
    }
  printf ("\n\tName\tRollNo\tMarks\t\n");
  for (i = 0; i < n; i++)
    {
      printf ("\t%s\t%d\t%.2f\t\n", sarr[i].name, sarr[i].rollno,
	      sarr[i].cpi);
    }
  return 0;
}
