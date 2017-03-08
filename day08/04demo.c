/*
 *      函数返回值演示
 * */
#include <stdio.h>

int read(void)
{
    int num = 0;
    printf("请输入一个数字:");
    scanf("%d", &num);
    return num;
}
int main()
{
    int num = read();
    printf("num = %d\n", num);
    return 0;
}
