/*
 *      条件编译演示
 * */
#include <stdio.h>

#define YI

int main()
{
#ifndef  YI
    printf("1\n");
#else
    printf("2\n");
#endif
    return 0;
}
