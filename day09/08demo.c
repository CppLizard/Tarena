/*
 *      作用域演示
 * */
#include <stdio.h>
int num1;           //全局变量
void func(void)
{
    int num = 10;   //局部变量
    int num1 = 100;
    printf("num1 = %d\n", num1);
}
int main()
{
    func();
    printf("num = %d\n", num1);
    return 0;
}
