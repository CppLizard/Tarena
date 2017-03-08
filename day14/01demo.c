/*
 *      枚举类型演示
 * */
#include <stdio.h>

int main()
{
    //声明枚举类型
    //enum season {CHUN,XIA,QIU,DONG};
    enum {CHUN,XIA = 5,QIU,DONG};
    printf("QIU = %d\n", QIU);
    return 0;
}
