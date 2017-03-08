/*
 *      switch...case分支演示
 * */
#include <stdio.h>

int main()
{
    int season = 0;
    printf("请输入一个整数:");
    scanf("%d",&season);
    switch(season)
    {
        case 0:
            printf("春天\n");
            break;
        case 1:
            printf("夏天\n");
            break;
        case 2:
            printf("秋天\n");
            break;
        case 333:
            printf("冬天\n");
            break;
        default:
            printf("请输入0-3之间的整数!\n");
            break;
    }
    return 0;
}
