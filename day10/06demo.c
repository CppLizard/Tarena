/*
 *      编写函数把主函数里两个变量的内容做交换
 * */
#include <stdio.h>

void swap(int *num1, int *num2)
{
    int tmp = 0;
    tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}
int main()
{
    int num1 = 0;
    int num2 = 0;
    printf("请输入两个数字:");
    scanf("%d%d", &num1, &num2);
    swap(&num1, &num2);
    printf("num1 = %d\nnum2 = %d\n", num1, num2);
    return 0;
}
