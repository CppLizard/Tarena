/*
 *      数据对齐和补齐演示
 * */
#include <stdio.h>

typedef struct
{
    char buf[2];
    int num;
} tmp;
typedef struct
{
    char ch;
    int num;
    char ch1;
} tmp1;
typedef struct
{
    char ch;
    char ch1;
    int num;
} tmp2;
int main()
{
    tmp tp;
    printf("tmp = %d\n", sizeof(tmp));
    printf("tmp1 = %d\n", sizeof(tmp1));
    printf("tmp2 = %d\n", sizeof(tmp2));
    return 0;
}
