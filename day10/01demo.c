/*
 *      指针练习
 *      输入三个数字，从大到小输出
 * */
#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int tmp = 0;
    int *p_tmp = &tmp;
    int *p_num1 = &num1;
    int *p_num2 = &num2;
    int *p_num3 = &num3;
    printf("请输入三个数字:");
    scanf("%d%d%d", p_num1, p_num2, p_num3);
/*    
    if (*p_num1 < *p_num2)
    {
        *p_tmp = *p_num1;
        *p_num1 = *p_num2;
        *p_num2 = *p_tmp;
    }
    if (*p_num1 < *p_num3)
    {
        *p_tmp = *p_num1;
        *p_num1 = *p_num3;
        *p_num3 = *p_tmp;
    }
    if (*p_num2 < *p_num3)
    {
        *p_tmp = *p_num2;
        *p_num2 = *p_num3;
        *p_num3 = *p_tmp;
    }
*/
    if (*p_num1 < *p_num2)
    {
        p_tmp = p_num1;
        p_num1 = p_num2;
        p_num2 = p_tmp;
    }
    if (*p_num1 < *p_num3)
    {
        p_tmp = p_num1;
        p_num1 = p_num3;
        p_num3 = p_tmp;
    }
    if (*p_num2 < *p_num3)
    {
        p_tmp = p_num2;
        p_num2 = p_num3;
        p_num3 = p_tmp;
    }
    printf("%d %d %d\n", *p_num1, *p_num2, *p_num3);
    return 0;
}
