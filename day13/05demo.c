/*
 *      编写程序计算长方形面积
 *      一个函数用来从键盘得到水平长方形的位置
 *      一个函数用来记录面积
 * */
#include <stdio.h>

typedef struct
{
    int row;
    int col;
} pt;
typedef struct
{
    pt pt1;
    pt pt2;
} rect;
rect *read(rect *p_rect)
{
    printf("请输入水平长方形的位置:");
    scanf("%d%d%d%d", &(p_rect->pt1.row), &(p_rect->pt1.col), &(p_rect->pt2.row), &(p_rect->pt2.col));
    return p_rect;
}
int area(const rect *p_rect)
{
    int ret = (p_rect->pt1.row - p_rect->pt2.row) * (p_rect->pt1.col - p_rect->pt2.col);
    return ret >= 0 ? ret : 0 - ret;
}
int main()
{
    rect pt1;
    rect *p_r = NULL;
    p_r = read(&pt1);
    printf("长方形的面积:%d\n", area(p_r));
    return 0;
}
