/*
 *      字符串函数演示
 * */
#include <stdio.h>

int main()
{
    char str[20] = {0};
    char ch = 0;
    int num = 0;
    float fnum = 0.0f;
    printf("%d %c %g\n", 34, 't', 5.6f);
    sprintf(str, "%d %c %g\n", 34, 't', 5.6f);
    printf("str = %s", str);
    //scanf("%c%d%g", &ch, &num, &fnum);
    sscanf("A 92 3.14", "%c%d%g", &ch, &num, &fnum);
    printf("fnum = %g ch = %c num = %d\n", fnum, ch, num);
    return 0;
}
