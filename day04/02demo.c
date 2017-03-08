/*
 *      操作符演示
 * */
#include <stdio.h>

int main()
{
    int num = 0;
    char ch = 0;
    num = ch = 300;
    printf("%d\n",num);
    num += 6;
    printf("%d\n",num);
    num *= 2 + 3;
    printf("%d\n",num);
    printf("%d\n",3 < 7 > 5);
    return 0;
}
