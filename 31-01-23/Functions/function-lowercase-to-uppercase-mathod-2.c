#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i;
    char str[10];
    printf("Enter a string:");
    scanf("%s",str);
    printf("%s",str);
    printf("\n");
    for(i=0;i<strlen(str);i++)
    {
    printf("%c",toupper(str[i]));
    }
    return 0;
}
