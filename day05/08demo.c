/*
 *      编写程序从键盘得到两个整数
 *      计算他们之间所有整数的和并把结果显示在屏幕上
 * */
#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int n = 0;
    printf("请输入第一个整数:");
    scanf("%d",&i);
    printf("请输入第二个整数:");
    scanf("%d",&j);
    if(i>j)
    {
        for(++j;j<i;j++)
        {
            n += j;
        }
            printf("%d\n",n);
    }
    else
    {
        for(++i;i<j;i++)
        {
            n += i;
        }
            printf("%d\n",n);
    }
    return 0;
}
