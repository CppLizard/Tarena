/*
 *      请打印以下图案
 *              *
 *             ***
 *            *****
 *           *******
 *            *****
 *             ***
 *              *
 * */
#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    for(i = 1; i <= 7; i += 2)
    {
        for(j = 1; j <= i; j++)
        {
            printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
