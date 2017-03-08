/*
 *      类型转换演示
 * */
#include <stdio.h>

int main()
{
    printf("sizeof(1 ? 1 : 0.9) = %d\n",sizeof(1 ? 1 : 0.9));
    printf("-7 + 3 > 0 = %d\n",-7 + 3 > 0);
    printf("-7 + 3u > 0 = %d\n",-7 + 3u > 0);
    printf("-7u + 3 > 0 = %d\n",-7u + 3 > 0);
    printf("%d %d\n",300,(char) 300);
    return 0;
}
