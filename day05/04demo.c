/*
 *      编写程序从键盘得到三个数字，找到其中最大的数字并显示在屏幕上
 * */
#include <stdio.h>

int main()
{
    int a=0,b=0,c=0;
    printf("请输入第一个数字:");
    scanf("%d",&a);
    printf("请输入第二个数字:");
    scanf("%d",&b);
    printf("请输入第三个数字:");
    scanf("%d",&c);
    if(a >= b && a >= c)
    {
        printf("其中最大的数字是:%d\n",a);
    }
    else if(b >= a && b >= c)
    {
        printf("其中最大的数字是:%d\n",b);
    }
    else
    {
        printf("其中最大的数字是:%d\n",c);
    }
    return 0;
}
