/*
 *      多文件编程演示
 * */
#include <stdio.h>
#include "10add.h"

int main()
{
    int n = 0;
    int m = 0;
    printf("请输入两个数字:");
    scanf("%d%d", &n, &m);
    printf("n + m = %d\n", add(n, m));
    return 0;
}
