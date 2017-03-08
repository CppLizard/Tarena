/*
 *      continue语句演示
 */
#include <stdio.h>

int main()
{
    int num = 0;
    for(num = 1;num <= 5; num++)
    {
        printf("%d ",num);
        if(num == 3)
        {
            continue;
        }
        printf("%d ",10 + num);
    }
    printf("\n");
    return 0;
}
