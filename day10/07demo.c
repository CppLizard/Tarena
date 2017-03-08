/*
 *      编写函数把三个数字从大到小输出
 * */
#include <stdio.h>

void sort(int *num1, int *num2, int *num3)
{
    int tmp = 0;
    if (*num1 < *num2)
    {
        tmp = *num1;
        *num1 = *num2;
        *num2 = tmp;
    }
    if (*num1 < *num3)
    {
        tmp = *num1;
        *num1 = *num3;
        *num3 = tmp;
    }
    if (*num2 < *num3)
    {
        tmp = *num2;
        *num2 = *num3;
        *num3 = tmp;
    }
    printf("%d %d %d\n", *num1, *num2, *num3);
}
int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    printf("请输入三个数字:");
    scanf("%d%d%d", &num1, &num2, &num3);
    sort(&num1, &num2, &num3);
    return 0;
}
