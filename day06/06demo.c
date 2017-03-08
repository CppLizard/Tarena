/*
 *
 * */
#include <stdio.h>

int main()
{
    int num = 0, num1 = 0;
    printf("请输入一个数字:");
    scanf("%d",&num);
    scanf("%*[^\n]");
    scanf("%*c");
    printf("num = %d\n",num);
    printf("请输入一个数字:");
    scanf("%d",&num1);
    printf("num = %d\n",num1);
    return 0;
}
