#include <stdio.h>
#include "11read.h"

//static int num;   编译出错
int num;
int read(void)
{
    printf("请输入一个整数:");
    scanf("%d", &num);
    return num;
}
