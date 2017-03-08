/*
 *      文件操作演示
 * */
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 0;
    //打开文件
    FILE *p_file = fopen("01demo.bin","wb");
    //检查是否打开成功
    if (p_file)
    {
        //操作文件
        size = fwrite(arr, sizeof(int), 5, p_file);
        printf("写入%d个整数类型存储区\n", size);
        //关闭文件
        fclose(p_file);
        p_file = NULL;
    }
    return 0;
}
