/*
 *      二维数组演示
 * */
#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int n = 1;
    int arr[3][2] = {1, 2, 3, 4, 5, 6};
    int arr1[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    for (i = 0; i < 3;i++)
    {
        for (j = 0; j < 2;j++)
        {
            arr[i][j] = n;
            printf("%d ",arr[i][j]);
            n++;
        }
    printf("\n");
    }
    return 0;
}
