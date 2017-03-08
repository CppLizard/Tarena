/*
 *      编写程序从键盘得到一个0到127之间的数字
 *      把它转换成二进制并把结果显示在屏幕上
 *      先显示左边的数位，后显示右边的数位
 * */
#include <stdio.h>

int main()
{
    int num = 0;
    unsigned char ch = 0x80;
    printf("请输入一个0到127之间的数字:");
    scanf("%d",&num);
    printf("%d",(num & ch) != 0);
    ch >>= 1;
    printf("%d",(num & ch) != 0);
    ch >>= 1;
    printf("%d",(num & ch) != 0);
    ch >>= 1;
    printf("%d ",(num & ch) != 0);
    ch >>= 1;
    printf("%d",(num & ch) != 0);
    ch >>= 1;
    printf("%d",(num & ch) != 0);
    ch >>= 1;
    printf("%d",(num & ch) != 0);
    ch >>= 1;
    printf("%d\n",(num & ch) != 0);
    printf("\a");
    return 0;
}
