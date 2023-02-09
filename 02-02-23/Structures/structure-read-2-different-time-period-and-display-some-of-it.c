#include <stdio.h>

struct time
{
  int hour;
  int min;
  int sec;
};

int
main ()
{
  struct time time[2];
  int i, h = 0, m = 0, s = 0;
  for (i = 0; i < 2; i++)
    {
      printf ("Enter %d time:\n", i + 1);
      printf ("Enter time%d hours:", i + 1);
      scanf ("%d", &time[i].hour);
      printf ("Enter time%d minutes:", i + 1);
      scanf ("%d", &time[i].min);
      printf ("Enter time%d seconds:", i + 1);
      scanf ("%d", &time[i].sec);
      printf ("The time%d is: %d:%d:%d\n\n", i + 1, time[i].hour, time[i].min,
	      time[i].sec);
    }
  for (i = 0; i < 2; i++)
    {
      h += time[i].hour;
      m += time[i].min;
      s += time[i].sec;
    }
  printf ("The sum of time is: %d:%d:%d\n\n", h, m, s);
  return 0;
}
