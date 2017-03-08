/*
 *      递归函数联系
 *      1到100之间整数的和
 * */
#include <stdio.h>

int add(int n)
{
    static int sum;
    sum += n;
    if (n == 1)
    {
        return sum;
    }
    add(--n);
}
int main()
{
    printf("%d\n", add(100));
    return 0;
}
