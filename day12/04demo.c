/*
 *      编写宏实现两个整数相减的功能
 * */
#include <stdio.h>

#define SUB(n, m)     ((n) - (m))

int main()
{
    printf("SUB(10, 5) = %d\n", SUB(10, 5));
    printf("20 - SUB(10, 5) = %d\n", 20 - SUB(10, 5));
    printf("SUB(20, 10 - 5) = %d\n", SUB(20, 10 - 5));
    return 0;
}
