/*
 *      地址相关操作符演示
 * */
#include <stdio.h>

int main()
{
    int num = 514949125;
    printf("&num = %p\n",&num);
    *(&num) = 100;
    printf("num = %p\n",*&num);
    return 0;
}
