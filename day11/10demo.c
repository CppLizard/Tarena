/*
*      编写程序解决鸡兔同笼问题
*      程序从命令中得到头和脚的个数
*      然后计算出鸡和兔子各有多少只并把结果显示在屏幕上
*      ./a.out 40 100
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("命令错误！\n");
        return 0;
    }
    int heads = 0;
    int legs = 0;
    int num = 0;
    heads = atoi(argv[1]);
    legs = atoi(argv[2]);
    for (num = 0; num <= heads; num++)
    {
        if (4 * num + 2 * (heads - num) == legs)
        {
            printf("兔子 = %d\n鸡 = %d\n", num, heads - num);
        }
    }
    return 0;
}
