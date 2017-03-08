/*
 *      声明两个结构体
 *      一个结构体记录一个像素的位置
 *      另外一个结构体记录一个水平长方形的位置
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
int main()
{
    int height = 0;
    int widht = 0;
    rect r = {0};
    rect *p_r = &r;
    printf("请输入一个水平长方形的位置:");
    scanf("%d%d%d%d", &(r.pt1.row), &(r.pt1.col), &(r.pt2.row), &(r.pt2.col));
    height = r.pt1.row - r.pt2.row;
    height = height >= 0 ? height : 0 - height;
    widht = r.pt1.col - r.pt2.col;
    widht = widht >= 0 ? widht : 0 - widht;
    printf("长方形位置:((%d, %d), (%d, %d))\n", r.pt1.row, r.pt1.col, r.pt2.row, r.pt2.col);
    printf("长方形面积:%d\n", height * widht);
    //printf("请输入一个水平长方形的位置:");
    //scanf("%d%d%d%d", &(p_r->pt1.row), &(p_r->pt1.col), &(p_r->pt2.row), &(p_r->pt2.col));
    //printf("长方形位置:((%d, %d), (%d, %d))\n", p_r->pt1.row, p_r->pt1.col, p_r->pt2.row, p_r->pt2.col);
    return 0;
}
