/*
 *      宏操作符演示
 * */
#include <stdio.h>

#define STR(n)      #n
#define PTR(n)      p_##n
int main()
{
    int num = 0;
    //int *p_num = &num;
    int *PTR(num) = &num;
    STR(2 + 4);
    return 0;
}
