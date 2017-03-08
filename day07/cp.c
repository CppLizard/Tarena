#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 0;
    int j = 0;
    int arr[7] = {0};
    int guess[7] = {0};
    int tmp = 0;
    int size = 0;
    int cnt = 0;
    for (i = 0; i < 7; i++)
    {
        printf("请输入0到36之间的整数:");
        scanf("%d", &guess[i]);
    }
    for (i = 0; i < 7; i++)
    {
        printf("%d ", guess[i]);
    }
    printf("\n");
    srand(time(0));
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
    while(size < 7);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (arr[i] == guess[j])
            {
                cnt++;
            }
        }
        printf("%d ", arr[i]);
    }
    printf("\n对上了%d个数字!\n",cnt);
    return 0;
}
