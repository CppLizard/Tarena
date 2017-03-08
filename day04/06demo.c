/*
 *      三目操作符演示
 * */
#include <stdio.h>

int main()
{
    int num = 0;
    printf("请输入一个数字:");
    scanf("%d",&num);
    num = num >= 0 ? num : -num;
    printf("绝对值:%d\n",num);
    return 0;
}
