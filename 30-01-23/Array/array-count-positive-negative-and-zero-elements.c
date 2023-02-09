#include <stdio.h>

int main()
{
    int i,j,zcount=0,pcount=0,ncount=0;
    int arr[3][3]={{1,-2,3},
                   {0,1,-3}, 
                   {3,0,-3}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==0)
            zcount++;
            else if(arr[i][j]>0)
            pcount++;
            else
            ncount++;
        }
    }
    printf("\nNo of zeros are:%d\n",zcount);
    printf("No of positives are:%d\n",pcount);
    printf("No of negatives are:%d\n",ncount);
    return 0;
}

