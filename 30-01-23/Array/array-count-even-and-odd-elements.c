#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int i,evencount=0,oddcount=0;
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=0;i<5;i++)
    {
      if(arr[i]%2==0)
      evencount++;
    }
    printf("Even elements are:%d\n",evencount);

    for(i=0;i<5;i++)
    {
      if(arr[i]%2!=0)
      oddcount++;
    }
    printf("Odd elements are:%d\n",oddcount);
    return 0;
}
