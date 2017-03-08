/*
 *      编写程序从键盘得到一个0到100之间的数字
 *      把这个数字到100之间所有和7无关的数字显示在屏幕上
 * */
#include <stdio.h>

int main()
{
    int num = 0;
    printf("请输入一个0到100之间的数字:");
    scanf("%d",&num);
    for(num;num <= 100;num++)
    {
        if(num % 10 ==7 || num /10 % 10 ==7)
        {
            continue;
        }
        printf("%d ",num);
    }
    printf("\n");
    return 0;
}
