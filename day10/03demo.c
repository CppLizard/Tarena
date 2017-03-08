/*
 *      const关键字演示
 * */
#include <stdio.h>

int main()
{
    int num = 0;
    const int *p_num = &num;
    int * const p_num1 = &num;
    //*p_num = 10;       //编译出错(不能给const指针赋值)
    printf("num = %d\n", *p_num);
    num = 10;
    printf("num = %d\n", *p_num);
    p_num = NULL;         //指针本身可以赋值     

    *p_num1 = 100;        //可以赋值
    printf("num = %d\n", *p_num1);
    //p_num1 = NULL;      //指针本身不可以赋值
    return 0;
}
