/*
 *      1 1 2 3 5 8 13 21 ...
 *      0 1 2 3 4 5  6  7 ...
 *      编写递归函数
 * */
#include <stdio.h>

//第一种加快运行速度的方法
//int arr[50];
int neg(int num)
{
    static int arr[50];
    if (num <= 1)
    {
        return 1;
    }
    if (!arr[num - 2])
    {
        arr[num - 2] = neg(num - 2);
    }
    if (!arr[num - 1])
    {
        arr[num - 1] = neg(num - 1);
    }
    return arr[num - 2] + arr[num - 1];
}
int main()
{
    int num = 0;
    printf("请输入一个整数:");
    scanf("%d", &num);
    printf("n = %d\n", neg(num));
    return 0;
}
