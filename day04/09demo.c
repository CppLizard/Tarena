#include <stdio.h>
void fun(int n);
int main()
{
    int a=0;
    scanf(" %d",&a);
    fun(a);
    return(0);
}

void fun(int n)
{
    int i=0;
    for(i=sizeof(int)*8-1;i>=0;--i)
    {
        printf("%d",n>>i&1);
    }
}
