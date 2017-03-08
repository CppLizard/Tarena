/*
 *      函数演示
 * */
#include <stdio.h>
void func(void)
{
    int num;
    printf("%d\n",num);
    num = 10;
}
void func1(void)
{
    int val = 100;
    func();
    func();
}
int main()
{
    func();
    func();
    func1();
    return 0;
}
