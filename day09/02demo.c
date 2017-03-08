/*
 *      数组形式参数演示
 *      输入输出参数
 * */
#include <stdio.h>

neg(int arr[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        arr[i] = 0 - arr[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int i = 0;
    neg(arr, 5);
    for (i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
