/*
 *      编写程序从键盘得到多个考试成绩(考试成绩的个数不超过10个)
 *      把所有的考试成绩按照下面的格式合并成一个字符串
 *      10，20，30，40，50
 *      最后把合并的结果显示在屏幕上
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char buf[50] = {0};
    char tmp[10] = {0};
    int grade = 0;
    while(1)
    {
        printf("请输入一个考试成绩:");
        scanf("%d", &grade);
        if (grade < 0)
        {
            break;
        }
        sprintf(tmp, "%d,", grade);
        strcat(buf, tmp);
    }
    buf[strlen(buf) - 1] = 0;
    buf[0] = '\b';
    printf("%s\n", buf);
    return 0;
}
