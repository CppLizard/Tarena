/*
 *      编写函数从两个圆里找到面积比较大的并把它传递给调用函数
 *      不可以使用返回值
 * */
#include <stdio.h>

void max_area(double radius1, double radius2, double **pp_s)
{
    double s1 = 0;
    double s2 = 0;
    s1 = 3.14 * radius1 * radius1;
    s2 = 3.14 * radius2 * radius2;
    if (s1 > s2)
    {
        *pp_s = &s1;
    }
    else
    {
        *pp_s = &s2;
    }
}
int main()
{
    double radius1 = 0;
    double radius2 = 0;
    double *p_s = NULL;
    printf("请输入第一个圆的半径:");
    scanf("%lg", &radius1);
    printf("请输入第二个圆的半径:");
    scanf("%lg", &radius2);
    max_area(radius1, radius2, &p_s);
    printf("比较大的圆 = %lg\n", *p_s);
    return 0;
}
