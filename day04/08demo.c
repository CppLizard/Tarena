/*
 *      利用异或运算符交换两个数值
 */
#include <stdio.h>

int main()
{
    int a,b;
    printf("请输入整数A:");
    scanf("%d",&a);
    printf("请输入整数B:");
    scanf("%d",&b);
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("A = %d\nB = %d\n",a,b);
    return 0;
}
