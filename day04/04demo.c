/*
 *      位操作符演示
 * */
#include <stdio.h>

int main()
{
    int n = ~0x93;
    unsigned char ch = 0;
    int m = n;
    printf("0x%x\n",n);
    printf("11 & 6 = %d\n",11 & 6);
    printf("11 | 6 = %d\n",11 | 6);
    printf("11 ^ 6 = %d\n",11 ^ 6);
    printf("3 << 2 = %d\n",3 << 2);
    printf("3 >> 2 = %d\n",3 >> 2);
    printf("10 << 2 = %d\n",10 << 2);
    printf("10 >> 2 = %d\n",10 >> 2);
    printf("0x7fffffff >> 2 = 0x%x\n",0x7fffffff >> 2);
    ch = 256;
    printf("64 << 2 = %d\n",ch << 2);
    printf("%p\n",&m);
    return 0;
}
