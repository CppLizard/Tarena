/*
 *      编写程序从键盘得到多个考试成绩(考试成绩的个数不超过10个)
 *      把所有的考试成绩按照下面的格式合并成一个字符串
 *      10，20，30，40，50
 *      最后把合并的结果显示在屏幕上
 * */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = {0};
    char tmp[10] = {0};
    int grade = 0;
    int i = 0;
    int j = 0;
    printf("输入一个负数来结束!\n");
    do
    {
        printf("请输入第%d个考试成绩:", i + 1);
        scanf("%d", &grade);
        if (grade < 0)
        {
            break;
        }
        sprintf(tmp, ",%d", grade);
        strcat(str, tmp);
        i++;
    }
    while(i < 10);
    str[0] = '\b';
    printf("%s\n", str);
    return 0;
}
