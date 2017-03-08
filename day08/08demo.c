/*
 *      1 X 9 = 9
 *      2 X 8 = 16
 *      3 X 7 = 21
 *      4 X 6 = 24
 *      5 X 5 = 25
 *      每行使用一个函数调用语句显示
 * */
#include <stdio.h>

int result(int i, int j)
{
    return i * j;
}
int main()
{
    int i = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("%d X %d = %d\n", i, 10 - i, result(i, 10 - i));
    }
    return 0;
}
