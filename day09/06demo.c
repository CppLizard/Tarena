/*
 *      编写递归函数计算从1开始到某个给定正整数之间的所有整数的和
 * */
#include <stdio.h>

int sum(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return sum(num - 1) + num;
}
int main()
{
    int num = 0;
    printf("请输入一个数字:");
    scanf("%d", &num);
    printf("求和结果 = %d\n", sum(num));
    return 0;
}
