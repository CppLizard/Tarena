/*
 *      用宏计算一个数的平方
 * */
#include <stdio.h>
#define SQUARE(n)   ((n) * (n))
int main()
{
    printf("SQUARE(10) = %d\n", SQUARE(10));
    return 0;
}
