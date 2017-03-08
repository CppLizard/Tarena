/*
 *      编写函数把一个数组里所有存储区的内容前后颠倒
 *      假如数组里原有内容是 1 2 3 4 5
 *      颠倒后的内容是       5 4 3 2 1
 *      用指针编写这个函数
 * */
#include <stdio.h>

int *reverse(int *p_num, int size)
{
    int *p_head = p_num;            //捆绑第一个存储区
    int *p_tail = p_num + size - 1; //捆绑最后一个存储区
    int tmp = 0;
    while (p_head < p_tail)
    {
        tmp = *p_head;
        *p_head = *p_tail;
        *p_tail = tmp;
        p_head++;
        p_tail--;
    }
    return p_num;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int num = 0;
    for (num = 0; num < 5; num++)
    {
        printf("%d ", arr[num]);
    }
    printf("\n");
    int *p_num = reverse(arr, 5);
    for (num = 0; num < 5; num++)
    {
        printf("%d ", *(p_num + num));
    }
    printf("\n");
    return 0;
}
