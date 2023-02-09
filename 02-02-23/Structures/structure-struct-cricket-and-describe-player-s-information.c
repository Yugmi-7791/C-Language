#include <stdio.h>

struct cricket
{
  char player_name[20];
  char team_name[20];
  float bat_avg;
};

int
main ()
{
  int i, n;
  printf ("Enter how many records u want to store : ");
  scanf ("%d", &n);
  struct cricket arr[n];
  for (i = 0; i < n; i++)
    {
      printf ("\nEnter %d record : \n", i + 1);
      printf ("Enter Player's Name : ");
      scanf ("%s", arr[i].player_name);
      printf ("Enter Team name of Player : ");
      scanf ("%s", arr[i].team_name);
      printf ("Enter Batting average of Player : ");
      scanf ("%f", &arr[i].bat_avg);
    }

  for (i = 0; i < n; i++)
    {
      printf ("\nPlayer%d's name: %s \n", i + 1, arr[i].player_name);
      printf ("Team of player%d is :%s\n", i + 1, arr[i].team_name);
      printf ("Batting average of player%d is :%f\n", i + 1, arr[i].bat_avg);
    }

  return 0;
}
