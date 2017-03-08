/*
 *      数组演示
 * */
#include <stdio.h>

int main()
{
    int arr[5] = {0}, size = 0;
    printf("%p\n",arr);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    printf("sizeof(arr) = %d\n",sizeof(arr));
    printf("请输入一个整数:");
    scanf("%d",&size);
    int arr1[size];
    printf("sizeof(arr1) = %d\n",sizeof(arr1));
    return 0;
}
