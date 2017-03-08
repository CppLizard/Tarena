/*
 *      编写点菜程序
 *      这个程序可以编译两个不同的版本
 *      程序要能给出正确提示
 *      1代表龙虾
 *      2代表小鸡炖蘑菇
 * */
#include <stdio.h>

int main()
{
    int order = 0;
    printf("请点菜:");
    scanf("%d", &order);
#ifdef  ZHAOBENSHAN
    if (order == 2)
    {
        printf("真没有!\n");
    }
    else
    {
        printf("没有!\n");
    }
#else
    if (order == 2)
    {
        printf("没有!\n");
    }
    else
    {
        printf("有!\n");
    }
#endif
    return 0;
}
