/*
 *      指针演示
 * */
#include <stdio.h>

int main()
{
    int num = 0;
    int *p_num = NULL, *p_num1 = &num;     //指针变量的声明
    p_num = &num;
    *p_num = 10;
    printf("%p = %d\n", p_num, num);
    return 0;
}
