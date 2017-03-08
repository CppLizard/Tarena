#include<stdio.h>
int main()
{
    char str[50];
    char* p=str;
    printf("Enter a string:");
    scanf("%s",str);
    while((*p)!='\0')
    {
        printf("%-4d\n",*p);
        ++p;
    }
    return(0);
}
