/*
 *      银行密码演示
 * */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void printf_ok()
{
    printf("     ****************       ***           ***\n");
    printf("    ******************      ***         ***\n");
    printf("    ***            ***      ***       ***\n");
    printf("    ***            ***      ***     ***\n");
    printf("    ***            ***      ***   ***\n");
    printf("    ***            ***      *** ***\n");
    printf("    ***            ***      ******\n");
    printf("    ***            ***      ******\n");
    printf("    ***            ***      ***  ***\n");
    printf("    ***            ***      ***    ***\n");
    printf("    ***            ***      ***      ***\n");
    printf("    ***            ***      ***        ***\n");
    printf("    ******************      ***          ***\n");
    printf("     ****************       ***            ***\n");
}
int main()
{
    int pass;
    int i=0;
    int t=5;
    printf("========欢迎使用银行密码测试系统！========\n");
    while(pass!=123456)
    {
        printf("请输入密码:");
        scanf("%d",&pass);
        if(pass!=123456)
            printf("%d次输错密码了！\n",++i);
        if(i==3)
        {
            printf("对不起，您卡被取款机吞了，请联系银行...\n");
            while(t>0)
            {
                printf("\r%d秒后退出系统...\n",t--);
                sleep(1);
            }
            return 1;
        }
    }
    if(pass==123456)
    {
        printf("密码正确，进入系统中...\n");
        while(t>0)
        {
            printf("\r%d秒后进入系统...\n",t--);
            sleep(1);
        }
    }
    printf_ok();
    return 0;
}
