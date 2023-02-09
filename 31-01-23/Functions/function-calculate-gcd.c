#include <stdio.h>
int gcd(int a,int b);
int
main ()
{
  int n1, n2;
  printf ("Enter two numbers : ");
  scanf ("%d %d", &n1, &n2);
  printf ("You entered : %d and %d", n1, n2);
  gcd(n1,n2);
  return 0;
}

int gcd(int a,int b)
{
    int i,ans;
    for (i = 1; i <= a && i <= b; i++)
    {
      if (a % i == 0 && b % i == 0)
	  ans = i;
    }
    printf("\n\nGCD of two numbers is : %d",ans);
    return 0;
}
