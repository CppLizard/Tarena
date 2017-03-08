/*
 *      文件操作演示
 * */
#include <stdio.h>

int main()
{
    int arr[5] = {0};
    int size = 0;
    int num = 0;
    FILE *p_file = fopen("01demo.bin", "rb");
    if (p_file)
    {
        size = fread(arr, sizeof(int), 5, p_file);
        printf("一共读取%d个整数\n", size);
        for (num = 0; num < size; num++)
        {
            printf("%d ", arr[num]);
        }
        printf("\n");
        fclose(p_file);
        p_file = NULL;
    }
    return 0;
}
