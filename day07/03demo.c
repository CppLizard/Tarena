#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 0;
    int num = 0;
    int tmp = 0;
    int size = 0;
    srand(time(0));
    printf("请输入一个1到36之间的整数:");
    scanf("%d",&num);
    int arr[num];
    do
    {
        tmp = rand() % 36 + 1;
        for (i = 0; i <= size - 1; i++)
        {
            if (arr[i] == tmp)
            {
                break;
            }
        }
        if (i == size)
        {
            arr[size] = tmp;
            size++;
        }
    }
    while(size < num);
    for (i = 0; i < num; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
