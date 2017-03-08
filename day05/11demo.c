/*
 *      一共40个头，100只脚
 *      编写程序计算兔子和鸡各有多少只
 * */
#include <stdio.h>

int main()
{
    int t;
    for(t = 0; t <= 40;t++)
    {
        if(4 * t + 2 * (40 - t) == 100)
            printf("兔子=%d,鸡=%d\n",t,40 - t);
    }
    return 0;
}
