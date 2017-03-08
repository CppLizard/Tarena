/*
 *      二维数组演示
 * */
#include <stdio.h>

int main()
{
    int arr[3][2] = {0};
    printf("%p\n%p\n",arr,&arr[0][0]);
    printf("%d\n",sizeof(arr));
    printf("%p\n%p\n",arr[1],&arr[1][0]);
    printf("%p\n%p\n",arr[2],&arr[2][0]);
    printf("%d\n",sizeof(arr[1]));
    return 0;
}
