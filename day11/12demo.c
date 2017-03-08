/*
 *      假设有一个如下格式的字符串
 *      10，20，30，40，50
 *      编写程序计算字符串里所有数字的和并把结果显示在屏幕上
 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p_str = "10,20,30,40,50";
    char *p_tmp = p_str;
    int sum = 0;
    while(1)
    {
        sum += atoi(p_str);
        p_str = strstr(p_str, ",");
        if (!p_str)
        {
            break;
        }
        p_str++;
    }
    printf("%d\n", sum);
    return 0;
}
