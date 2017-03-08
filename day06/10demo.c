#include <stdio.h>

int main()
{
    int arr[10] = {0};
    int num = 0;
    printf("请输入一个正整数:");
    scanf("%d",&num);
    do
    {
        arr[num % 10]++;
        num /= 10;
    }
    while(num);
    for(num = 0;num <= 9;num++)
    {
        if(arr[num])
        {
            printf("数字%d出现了%d次\n",num,arr[num]);
        }
    }
    return 0;
}
