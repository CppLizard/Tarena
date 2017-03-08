/*
 *      指针数组演示
 * */
#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 0;
    int *p_arr = arr;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
        printf("%d ", p_arr[i]);
        printf("%d ", *(p_arr + i));
    }
    printf("\narr = %p\narr + 3 = %p\narr + 2 = %p\n&arr[3] = %p\n", p_arr, p_arr + 3, p_arr + 2, &arr[3]);
    printf("&arr[3] - arr = %d\n", &arr[3] - arr);
    return 0;
}
