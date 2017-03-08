/*
 *      函数参数演示
 * */
#include <stdio.h>

void print(int a, int b)
{
    printf("%d %d\n", a, b);
}
int main()
{
    print(5, 6);
    print(5 + 8, 6 + 21);
    return 0;
}
