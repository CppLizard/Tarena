/*
 *      文本文件操作演示
 *      fscanf()函数
 * */
#include <stdio.h>

int main()
{
    int arr[5] = {0};
    int num = 0;
    FILE *p_file = fopen("03demo.txt", "r");
    if (p_file)
    {
        for (num = 0; num <= 4; num++)
        {
            fscanf(p_file, "%d", arr + num);
        }
        for (num = 0; num <= 4; num++)
        {
            printf("%d ", arr[num]);
        }
        printf("\n");
        fclose(p_file);
        p_file = NULL;
    }
    return 0;
}
