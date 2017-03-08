/*
 *      编写函数计算一个水平长方形中心点的位置
 *      并把结果传递给调用函数
 *      用动态分配内存记录中心点的位置
 * */
#include <stdio.h>
#include <stdlib.h>

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
pt *midpt(const rect *p_r)
{
    pt *p_mid = (pt *)malloc(sizeof(pt));
    if (p_mid)
    {
        p_mid->row = (p_r->pt1.row + p_r->pt2.row) / 2;
        p_mid->col = (p_r->pt1.col + p_r->pt2.col) / 2;
    }
    return p_mid;
}
int main()
{
    rect r = {0};
    pt *p_pt = NULL;
    printf("请输入一个水平长方形的位置:");
    scanf("%d%d%d%d", &(r.pt1.row), &(r.pt1.col), &(r.pt2.row), &(r.pt2.col));
    p_pt = midpt(&r);
    if (p_pt)
    {
        printf("长方形中心点是(%d, %d)\n", p_pt->row, p_pt->col);
        free(p_pt);
        p_pt = NULL;
    }
    return 0;
}
