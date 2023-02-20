#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int
main ()
{
  srand (time (NULL));
  int a, b, c, d, e, f, i;
  char *article[5] = { "the", "a", "one", "some", "any" };
  char *noun[5] = { "boy", "girl", "dog", "town", "car" };
  char *verb[5] = { "drove", "jumped", "ran", "walked", "skipped" };
  char *preposition[5] = { "to", "from", "over", "under", "on" };

    for(i=0;i<20;i++)
    {
        a = rand() % 5;
        b = rand() % 5;
        c = rand() % 5;
        d = rand() % 5;
        e = rand() % 5;
        f = rand() % 5;
        printf("sentence %d = %s %s %s %s %s %s.\n",i+1,article[a],noun[b],verb[c],preposition[d],article[e],noun[f]);
    } 
  return 0;
}

