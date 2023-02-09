#include <stdio.h>

struct time_struct
{
  int hour;
  int min;
  int sec;
};

int
main ()
{
  struct time_struct time;
  printf ("Enter hours:");
  scanf ("%d", &time.hour);
  printf ("Enter minutes:");
  scanf ("%d", &time.min);
  printf ("Enter seconds:");
  scanf ("%d", &time.sec);

  printf ("%d : %d : %d", time.hour, time.min, time.sec);



  return 0;
}
