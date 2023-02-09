#include<stdio.h>
int checkPrime (int n);

void
main ()
{
  int num;

  printf ("Enter number: ");
  scanf ("%d", &num);

  if (checkPrime (num) == 0)
    printf ("1");
  else
    printf ("0");
}

int
checkPrime (int n)
{
  int count = 0;

  for (int i = 2; i <= n / 2; i++)
    {
      if (n % i == 0)
	{
	  count = 1;
	  break;
	}
    }

  if (n == 1)
    count = 1;

  return count;
}
