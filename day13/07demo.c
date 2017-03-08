/*
 *      编写函数判断一个点和一个圆的位置关系
 *      返回值0表示点在圆里面
 *      返回值1表示点在圆上
 *      返回值2表示点在圆外
 *      
 *      (行号差的平方 + 列号差的平方)然后再开方
 * */
#include <stdio.h>

typedef struct
{
    int row;
    int col;
} pt;
typedef struct
{
    pt center;
    int radius;
} circle;
int len2(const pt *p_pt1, const pt *p_pt2)
{
    return (p_pt1->row - p_pt2->row) * (p_pt1->row - p_pt2->row) + (p_pt1->col - p_pt2->col) * (p_pt1->col - p_pt2->col); 
}
int relation(const circle *p_cl, const pt *p_pt)
{
    int tmp = len2(&(p_cl->center), p_pt);
    if (tmp > p_cl->radius * p_cl->radius)
    {
        return 2;
    }
    else if (tmp < p_cl->radius * p_cl->radius)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    circle cl = {0};
    pt pt1 = {0};
    int ret = 0;
    printf("请输入圆的位置:");
    scanf("%d%d%d", &(cl.center.row), &(cl.center.col), &(cl.radius));
    printf("请输入点的位置:");
    scanf("%d%d", &(pt1.row), &(pt1.col));
    ret = relation(&cl,  &pt1);
    if (!ret)
    {
        printf("点在圆里面\n");
    }
    else if (ret == 1)
    {
        printf("点在圆上\n");
    }
    else
    {
        printf("点在圆外\n");
    }
    return 0;
}
