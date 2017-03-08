/*
 *      函数指针演示
 * */
#include <stdio.h>

int add(int num1, int num2)
{
    return num1 + num2;
}
int main()
{
    //函数指针声明
    int (*p_func)(int, int) = NULL;
    p_func = add;
    printf("p_func = %p\n", p_func);
    printf("p_func(5, 8) = %d\n", p_func(5, 8));
    return 0;
}
