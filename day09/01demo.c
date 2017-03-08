/*
 *      数组形式参数演示  
 * */
#include <stdio.h>

void print(int arr[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    print(arr, 5);
    return 0;
}
