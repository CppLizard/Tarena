/*
    编写程序从键盘得到一个浮点数作为圆的半径，计算圆的周长并把结果显示在屏幕上
    根据半径计算周长的公式：2 * 3.14f * 半径
 */
#include <stdio.h>

int main()
{
    float radius = 0.0f;
    printf("请输入圆的半径:");
    scanf("%f",&radius);
    printf("半径为%g的圆的周长是:%g\n",radius,2 * 3.14f * radius);
    return 0;
}
