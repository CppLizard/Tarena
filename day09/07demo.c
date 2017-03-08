/*
 *       1 1 2 3 5 8 13 21...
 *       0 1 2 3 4 5  6  7...
 *       编写递归函数根据编号计算对应的数字
 * */
#include <stdio.h>

int fei(int num)
{
    if (num <= 1)
    {
        return 1;
    }
        return fei(num - 2) + fei(num - 1);
}
int main()
{
    int num = 0;
    printf("请输入一个数字:");
    scanf("%d", &num);
    printf("%d\n", fei(num));
    return 0;
}
