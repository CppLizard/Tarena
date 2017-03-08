/*
 *      编写函数从键盘得到两个整数
 *      把它们的和作为返回值传递给调用函数
 * */
#include <stdio.h>

int add(void)
{
    int a = 0;
    int b = 0;
    printf("请输入两个整数:");
    scanf("%d%d", &a, &b);
    return a + b;
}
int main()
{
    int sum = 0;
    sum = add();
    printf("sum = %d\n", sum);
    return 0;
}
