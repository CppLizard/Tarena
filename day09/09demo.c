/*
 *      使用递归函数编写1到指定数字之间的的
 * */
#include <stdio.h>

int neg(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return neg(num - 1) + num;
}
int main()
{
    int num = 0;
    printf("请输入一个数字:");
    scanf("%d", &num);
    printf("sum = %d\n", neg(num));
    return 0;
}
