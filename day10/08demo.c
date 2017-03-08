/*
 *      地址返回值演示
 * */
#include <stdio.h>

int *read(void)
{
    static int num = 0;
    printf("请输入一个数字:");
    scanf("%d", &num);
    return &num;
}
int main()
{
    int *p_num = read();
    printf("%d\n", *p_num);
    return 0;
}
