/*
 *      编写函数解决鸡兔同笼问题
 *      从调用函数得到头和脚的数量并把兔子的数量传递给调用函数
 * */
#include <stdio.h>

int rabbit(int heads, int legs)
{
    int num = 0;
    for (num = 0; num <= heads; num++)
    {
        if (4 * num + 2 * (heads - num) == legs)
        {
            return num;
        }
    }
}
int main()
{
    int num = 0;
    int heads = 0;
    int legs = 0;
    printf("请输入头和脚的数量:");
    scanf("%d%d", &heads, &legs);
    num = rabbit(heads, legs);
    printf("兔子数量:%d\n", num);
    return 0;
}
