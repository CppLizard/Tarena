/*
 *      if分支语句演示
 * */
#include <stdio.h>

int main()
{
    int num = 0;
    while(1)
    {
    printf("请输入一个整数:");
    scanf("%d",&num);
    if (num > 0)
    {
        printf("正数\n");
    }
    else if (num < 0)
    {
        printf("负数\n");
    }
    else
    {
        printf("0\n");
    }
    }
    return 0;
}
