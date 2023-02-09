#include<stdio.h>
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
  struct cricket arr[50];
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
  printf ("\n\tPlayer Name\tTeam of player\tBatting average\t\n");
  for (i = 0; i < n; i++)
    {
      printf ("\t%s\t\t%s\t\t%.3f\t\n", arr[i].player_name, arr[i].team_name,
	      arr[i].bat_avg);
    }
  return 0;
}
