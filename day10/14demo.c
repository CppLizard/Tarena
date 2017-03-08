/*
 *      递归练习
 *      s(n) = s(n-1)+s(n-2)
 * */
#include <stdio.h>

int a(int n)
{
    if (n < 3)
    {
        return 1;
    }
    return a(n - 1) + a(n - 2);
}
int main()
{
    int n = 0;
    int num = 0;
    printf("请输入一个数字:");
    scanf("%d", &n);
    num = a(n);
    printf("%d\n", num);
    return 0;
}
