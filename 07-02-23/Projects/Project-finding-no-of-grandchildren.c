//Program to find number of grandchildren

#include <stdio.h>
#include <string.h>
int n,count=0;
char name[20];
void count_child(char name[]);

// Structure of relation
struct rel
{
    char child[10];
    char father[10];
}r[5];

//Code for counting child
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
    
    //Entering number of inputs
    printf("\nEnter the number of inputs : ");
    scanf("%d",&n);
    printf("Enter %d inputs : \n",n);//printing entered values
    
    //saving inputs
    for (i=0;i<n;i++)
    {
        scanf("%s",r[i].child);
        scanf("%s",r[i].father);
    }
    printf("\nEnter name of the one whose number of grandchildren is needed :");
    scanf("%s",name);
    
    //Counting number of children of entered name
    for(i=0;i<n;i++)
    {
        if(strcmp(r[i].father,name)==0)
        count_child(r[i].child);
    }
    printf("\nNumber of grandchildre of %s is : %d\n",name,count);
}
