/*
 *      文本文件操作演示
 *      fprintf()函数
 * */
#include <stdio.h>
#include <string.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int num = 0;
    char buf[10] = {0};
    //FILE *p_file = fopen("03demo.txt", "wb");
    FILE *p_file = fopen("03demo.txt", "w");
    if (p_file)
    {
        for (num = 0; num <= 4; num++)
        {
            //sprintf(buf, "%d ", arr[num]);
            //fwrite(buf, sizeof(char), strlen(buf), p_file);
            fprintf(p_file, "%d ", arr[num]);
        }
        fclose(p_file);
        p_file = NULL;
    }
    return 0;
}
