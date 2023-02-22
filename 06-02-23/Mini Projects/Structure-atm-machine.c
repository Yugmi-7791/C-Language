//ATM Machine.

#include<stdio.h>

//structure for multiple users.
struct user
{
  int account_num;
  int pin_num;
};

int
main ()
{
  struct user user[4];

  int i, n;
  // assigning account number and pin number to array.
  int account[4] = { 12345, 23451, 34512, 45123 }, pin[4] =
  {1234, 2341, 3412, 4123};

  //Taking input of account number and pin number from user.
  for (i = 0; i < 4; i++)
    {
      printf ("Enter user%d account number:", i + 1);
      scanf ("%d", &user[i].account_num);
      printf ("user%d you entered: %d\n", i + 1, user[i].account_num);
      
      // If account number not matched then continue.
      if (account[i] != user[i].account_num)
	{
	  printf ("user%d Account number not matched, Try again...\n\n",
		  i + 1);
	  continue;
	}
      printf ("Enter user%d pin number:", i + 1);
      scanf ("%d", &user[i].pin_num);
      printf ("user%d you entered: %d\n", i + 1, user[i].pin_num);

      // If pin number not matched then print invalid pin.
      if (pin[i] != user[i].pin_num)
	{
	  printf ("user%d Invalid PIN.!! \n\n", i + 1);
	}
    }
  return 0;
}
