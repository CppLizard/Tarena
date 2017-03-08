#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 0;
    int arr[7] = {0};
    int tmp = 0;
    int size = 0;
    srand(time(0));

    do
    {
        tmp = rand() % 36 + 1;
        for(i = 0;i <= size - 1;i++)
        {
            if(arr[i] == tmp)
            {
                break;
            }
        }
        if(i == size)
        {
            arr[size] = tmp;
            size++;
        }        
    }
    while(size <= 6);
    for(i = 0;i <= 6;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
