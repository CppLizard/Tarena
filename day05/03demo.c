/*
 *      if分支语句演示
 * */
#include <stdio.h>

int main()
{
    int num = 0;
    printf("请输入一个数字:");
    scanf("%d",&num);
    if(num < 0)
    {
        printf("负数\n");
        if(num & 1)
        {
            printf("奇数\n");
        }
        else if(!(num & 1))
        {
            printf("偶数\n");
        }
    }
    else if(num >0)
    {
        printf("正数\n");
        if(num & 1)
        {
            printf("奇数\n");
        }
        else if(!(num & 1))
        {
            printf("偶数\n");
        }
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
