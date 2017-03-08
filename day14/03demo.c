/*
 *      二级指针演示
 * */
#include <stdio.h>

int main()
{
    int num = 0;
    int *p_num = &num;          //一级指针
    int **pp_num = &p_num;      //二级指针
    **pp_num = 10;
    printf("num = %d\n", num);
    *pp_num = NULL;
    printf("p_num = %p\n", p_num);
    return 0;
}
