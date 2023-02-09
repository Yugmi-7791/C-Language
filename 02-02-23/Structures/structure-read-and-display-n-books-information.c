#include<stdio.h>
struct book
{
  char title[20];
  char author_name[20];
  char publication[20];
  int price;
};

int
main ()
{
  int i, n;
  printf ("Enter how many records u want to store : ");
  scanf ("%d", &n);
  struct book book[n];
  for (i = 0; i < n; i++)
    {
      printf ("\nEnter %d record : \n", i + 1);
      printf ("Enter book title : ");
      scanf ("%s", book[n].title);
      printf ("Enter Author Name : ");
      scanf ("%s", book[i].author_name);
      printf ("Enter Publication : ");
      scanf ("%s", &book[i].publication);
      printf ("Enter the price of the book : ");
      scanf ("%d", &book[i].price);
    }

  for (i = 0; i < n; i++)
    {
      printf ("Title of the book%d is : %s", i + 1, book[n].title);
      printf ("Author name of the book%d is : %s", i + 1,
	      book[n].author_name);
      printf ("Publication of the book%d is : %s", i + 1,
	      book[n].publication);
      printf ("Price of the book%d is : %d", i + 1, book[n].price);
    }
  return 0;
}
