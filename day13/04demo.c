/*
 *      结构体形式参数演示
 * */
#include <stdio.h>

typedef struct
{
    int row, col;
} pt;
/*把结构体类型作为形式参数
void print(pt pt1)
{
    printf("点的位置是(%d, %d)\n", pt1.row, pt1.col);
}
*/
/*把结构体类型作为返回值
pt read(void)
{
    pt pt1 = {0};
    printf("请输入一个点的位置:");
    scanf("%d%d", &(pt1.row), &(pt1.col));
    return pt1;
}
*/
pt *read(pt *p_pt)
{
    printf("请输入一个点的位置:");
    scanf("%d%d", &(p_pt->row), &(p_pt->col));
    return p_pt;
}
void print(const pt *p_pt)
{
    printf("点的位置是(%d, %d)\n", p_pt->row, p_pt->col);
}
int main()
{
    pt pt1 = {0};
    pt *p_pt = NULL;
    p_pt = read(&pt1);
    //printf("请输入一个点的位置:");
    //scanf("%d%d", &(pt1.row), &(pt1.col));
    print(p_pt);
    print(&pt1);
    return 0;
}
