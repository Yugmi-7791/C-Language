#include <stdio.h>
#include <string.h>
int n,count=0;
char name[20];
void count_child(char name[]);
struct rel
{
    char child[10];
    char father[10];
}r[5];

void count_child(char name[])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(name,r[i].father)==0)
        {
            count++;
            count_child(r[i].child);
        }
    }
}
void main()
{
    int i;
    printf("\nEnter the number of inputs : ");
    scanf("%d",&n);
    printf("Enter %d inputs : \n",n);
    for (i=0;i<n;i++)
    {
        scanf("%s",r[i].child);
        scanf("%s",r[i].father);
    }
    printf("\nEnter name of the one whose number of grandchildren is needed :");
    scanf("%s",name);
    for(i=0;i<n;i++)
    {
        if(strcmp(r[i].father,name)==0)
        count_child(r[i].child);
    }
    printf("\nNumber of grandchildre of %s is : %d\n",name,count);
}