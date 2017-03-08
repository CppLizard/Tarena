#include <stdio.h>

int main()
{
    int i,j,q;
    int k = 7;
    for(i=1;i<=k;i+=2)
    {
        for(q=k;q>i;q-=2)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
