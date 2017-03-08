#include <stdio.h>

int main()
{
    int num = 0;
    printf("请输入一个0到127之间的整数:");
    scanf("%d",&num);
    printf("        %d\r",num % 2);
    num = num / 2;
    printf("       %d\r",num % 2);
    num = num / 2;
    printf("      %d\r",num % 2);
    num = num / 2;
    printf("     %d\r",num % 2);
    num = num / 2;
    printf("   %d\r",num % 2);
    num = num / 2;
    printf("  %d\r",num % 2);
    num = num / 2;
    printf(" %d\r",num % 2);
    num = num / 2;
    printf("%d\n",num % 2);
    return 0;
}
