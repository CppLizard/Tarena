/*
 *      编写猜数游戏
 *      计算机里首先产生一个0到99之间的随机数，然后让用户猜
 *      每猜一次要给出相应提示
 *      直到猜对游戏结束
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num = 0;
    int guess= 0;
    srand(time(0));
    num = rand() % 100;
/*    while(num != guess)
    {
    printf("请输入一个数字:");
    scanf("%d",&guess);
    if(guess > num)
    {
        printf("猜大了,请再试试!\n");
    }
    else if(guess < num)
    {
        printf("猜小了,请再试试!\n");
    }
    else
    {
        printf("猜对了!\n");
    } */

    do
    {
    printf("请输入一个数字:");
    scanf("%d",&guess);
    if(guess > num)
    {
        printf("猜大了,请再试试!\n");
    }
    else if(guess < num)
    {
        printf("猜小了,请再试试!\n");
    }
    else
    {
        printf("猜对了!\n");
    }
    } while(num != guess);
    return 0;
}
