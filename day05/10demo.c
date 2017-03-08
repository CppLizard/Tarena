#include <stdio.h>

int main()
{
    int n,m;
    for(n = 1, m = 10; n <= m; n++, m--)
    {
        printf("%d X %d = %d\n",n,m,n*m);
    }
    return 0;
}
