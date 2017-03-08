/*
 *      函数声明演示
 * */
#include <stdio.h>

double add(double num, double num1);
int main()
{
    int num = 0;
    int num1 = 0;
    int sum = 0;
    printf("请输入两个数字:");
    scanf("%d%d", &num, &num1);
    sum = add(num, num1);
    printf("%d + %d = %d\n", num, num1, sum);
    return 0;
}
double add(double num, double num1)
{
    return num + num1;
}
