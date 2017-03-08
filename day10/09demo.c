/*
 *      编写一个函数从一个数组里找到最大数字所在的存储区
 *          并把这个存储区的地址传递给调用函数
 * */
#include <stdio.h>

int *max(const int *p_num, int size)
{
    const int *p_tmp = NULL;
    const int *p_max = NULL;
    for (p_tmp = p_num; p_tmp < p_num + size; p_tmp++)
    {
        if (!p_max || *p_max < *p_tmp)
        {
            p_max = p_tmp;
        }
    }
    return (int *)p_max;
}
int main()
{
    int arr[] = {31, 42, 26, 34, 62};
    printf("%p\n", max(arr, 5));
    printf("%d\n", *(max(arr, 5)));
    return 0;
}
