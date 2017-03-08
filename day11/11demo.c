/*
 *      宏演示
 * */
#include <stdio.h>
#define     PI     3.14f     

int main()
{
    int radius = 0;
    printf("请输入圆的半径:");
    scanf("%d", &radius);
    printf("周长 = %g\n", 2 * PI * radius);
    return 0;
}
