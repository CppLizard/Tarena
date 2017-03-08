/*
 *      生命周期演示
 * */
#include <stdio.h>

void func(void)
{
    static int num = 1000;         //静态局部变量
    printf("num = %d\n", num);
    num = 10;
}
void func1(void)
{
    int num = 100;
    func();
}
int main()
{
    func();
    func1();
    return 0;
}
