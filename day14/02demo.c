/*
 *      联合体演示
 * */
#include <stdio.h>

//声明联合体
typedef union
{
    char ch;
    int num;
    float fnum;
} tmp;
int main()
{
    tmp tmp_union = {0};
    printf("&tmp_union.ch = %p\n", &(tmp_union.ch));
    printf("&tmp_union.num = %p\n", &(tmp_union.num));
    printf("&tmp_union.fnum = %p\n", &(tmp_union.fnum));
    printf("sizeof(tmp) = %d\n", sizeof(tmp));
    return 0;
}
