/*
 *      数组演示
 * */
#include <stdio.h>

int main()
{
    int arr[5] = {0, 1, 2,};
    int i = 0;
    for(i = 0;i <= 4;i++)
    {
        arr[i] = i * 2; 
    }
    for(i = 4;i >= 0;i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
