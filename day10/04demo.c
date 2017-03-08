/*
 *      无类型指针演示
 * */
#include <stdio.h>

int main()
{
    char ch = 'Q';
    int num = 34;
    float fnum = 5.6f;
    void *p_v = &ch;
    printf("%c\n", *(char *)p_v);
    p_v = &num;
    printf("%d\n", *(int *)p_v);
    p_v = &fnum;
    printf("%g\n", *(float *)p_v);
    return 0;
}
