/*
 *  编写程序从键盘得到一个0到127之间的整数
 *  把它转换成二进制并把结果显示在屏幕上
 *  15 / 6 = 2
 *  15 % 6 = 3
 * */
#include <stdio.h>

int main()
{
    unsigned char ch = 0;
    char ch1 = 0;
    char ch2 = 0;
    char ch3 = 0;
    char ch4 = 0;
    char ch5 = 0;
    char ch6 = 0;
    char ch7 = 0;
    char ch8 = 0;
    printf("请输入一个0到127之间的整数:");
    scanf("%d",&ch);
    ch1 = ch % 2;
    ch = ch / 2;
    ch2 = ch % 2;
    ch = ch / 2;
    ch3 = ch % 2;
    ch = ch / 2;
    ch4 = ch % 2;
    ch = ch / 2;
    ch5 = ch % 2;
    ch = ch / 2;
    ch6 = ch % 2;
    ch = ch / 2;
    ch7 = ch % 2;
    ch = ch / 2;
    ch8 = ch % 2;
    printf("二进制值是:%d%d%d%d %d%d%d%d\n",ch8,ch7,ch6,ch5,ch4,ch3,ch2,ch1);
    return 0;
}
