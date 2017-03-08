/*
 *      随机数演示
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    printf("%d\n",rand() % 10);
    printf("%d\n",rand() % 100);
    printf("%d\n",rand() % 1000);
    return 0;
}
