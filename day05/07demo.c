/*
 *      编写程序在屏幕上显示如下5行内容
 *      每次显示一行
 *      54321
 *      5432
 *      543
 *      54
 *      5
 * */
#include <stdio.h>

int main()
{
    int num;
    for(num = 54321;num >= 5;num /= 10)
    {
        printf("%d\n",num);
    }
    return 0;
}
