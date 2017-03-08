/*
 *      宏演示
 * */      
#include <stdio.h>
#define ABS(n)      n >= 0 ? n : 0 -n
#define NEG(n)      n = 0 - n
int abs(int num)
{
    if (num > 0)
    {
        return num;
    }
    else
    {
        return -num;
    }
}
void neg(int *p_num)
{
    *p_num = 0 - *p_num;
}
int main()
{
    int num = 0;
    printf("请输入一个数字:");
    scanf("%d", &num);
    printf("绝对值 = %d\n", abs(num));
    printf("绝对值 = %d\n", ABS(num));
    printf("相反数 = %d\n", NEG(num));
    neg(&num);
    printf("相反数 = %d\n", num);
    return 0;
}
