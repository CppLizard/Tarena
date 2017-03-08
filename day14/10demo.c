/*
 *      动态分配内存演示
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *p_num = NULL;
    int num = 0 ;
    srand(time(0));
    p_num = (int *)malloc(5 * sizeof(int));
    if (p_num)
    {
        //可以使用动态分配内存
        for (num = 0; num <= 4; num++)
        {
            *(p_num + num) = rand() % 36 + 1;
        }
        for (num = 0; num <= 4; num++)
        {
            printf("%d ", *(p_num + num));
        }
        printf("\n");
        free(p_num);
        p_num = NULL;
    }
    /*
    if (!p_num)
    {
        return 0;
    }
    //可以使用动态分配内存
    */
    return 0;
}
