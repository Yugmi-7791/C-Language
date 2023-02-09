#include <stdio.h>

int
main ()
{

  int i, j;

  int grades[4][3] = { {55, 60, 65},
  {85, 90, 95}, {23, 44, 66}, {67, 89, 45}
  };

  for (j = 0; j < 3; j++)

    {

      for (i = 0; i < 4; i++)

	{

	  printf ("%d\t", grades[i][j]);

	}

      printf ("\n");

    }


  return 0;

}

