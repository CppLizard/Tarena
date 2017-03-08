/*
 *       1 1 2 3 5 8 13 21...
 *       0 1 2 3 4 5  6  7...
 *       编写递归函数根据编号计算对应的数字
 * */
#include <stdio.h>
//第一种方法声明一个全局变量
//int arr[50];
int fei(int num)
{
    static int arr[50];
    if (num <= 1)
    {
        return 1;
    }
    //把计算结果存储在数组里
    //下次不用在计算直接读取数组里的值就行了
    if (!arr[num - 2])
    {
        arr[num -2] = fei(num - 2);
    }
    if (!arr[num - 1])
    {
        arr[num -1] = fei(num - 1);
    }
    return arr[num - 2] + arr[num - 1];
}
int main()
{
    int num = 0;
    printf("请输入一个数字:");
    scanf("%d", &num);
    printf("%d\n", fei(num));
    return 0;
}
