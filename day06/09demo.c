/*
 *      编写程序从键盘得到一个非负整数
 *      统计这个数字里每个个位数出现的次数并把结果显示在屏幕上
 * */
#include <stdio.h>

int main()
{
    int arr[10] = {};
    int num = 0;
    printf("请输入一个非负整数:");
    scanf("%d",&num);
    printf("%d\n",num);
    do
    {
        arr[num % 10]++;
        num /= 10;
    } while(num);
    for(num = 0;num <= 9;num++)
    {
        if(arr[num])
        {
            printf("数字%d出现了%d次\n",num,arr[num]);
        }
    }
    return 0;
}
