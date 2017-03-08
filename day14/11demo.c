/*
 *      动态内存分配演示
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *create(int size)
{
    int num = 0;
    int *p_num = (int *)malloc(size * sizeof(int));
    if (p_num)
    {
        for (num = 0; num <= size - 1; num++)
        {
            *(p_num + num) = rand() % 36 + 1;
        }
    }
    return p_num;
}
int main()
{
    int *p_num = NULL;
    int num = 0;
    srand(time(0));
    p_num = create(7);
    if (p_num)
    {
        for (num = 0; num <= 6; num++)
        {
            printf("%d ", *(p_num + num));
        }
        printf("\n");
        free(p_num);
        p_num = NULL;
    }
    return 0;
}
