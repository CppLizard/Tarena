/*
 *      编写程序产生一张彩票，彩票里包含7个1到36之间的随机数
 *      产生之后把彩票里的数字显示在屏幕上
 *      1.允许彩票里出现重复数字
 *      2.保证彩票里不会出现重复数字
 *      3.用户输入7个1到36之间的数字，和前面产生的数字做对比
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    int tmp = 0;
    int size = 0;
    int arr[7] = {0};
    int guess[7] = {0};
    srand(time(0));
    /*
    for(i = 0;i <= 6;i++)
    {
        arr[i] = rand() % 36 +1;
    }
    */
    for(i = 1 ;i <= 7;i++)
    {
        printf("请输入第%d个数字:",i);
        scanf("%d",&guess[i]);
    }
    for(i = 1 ;i <= 7;i++)
    {
        printf("%d ",guess[i]);
    }
    printf("\n");
    do
    {
        //获得一个新数字
        tmp = rand() % 36 + 1;
        //用新数字和以前得到的所有有效数字依次做对比
        for(i = 0;i <= size - 1;i++)
        {
            //如果新数字和以前的某个数字一样就说明新数字不能用
            if(arr[i] == tmp)
            {
                break;
            }
        }
        //如果前面的循环是正常结束的就说明新数字可以使用，应该把它放到数组里
        //另外还需要把已经得到的数字个数加一
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
    k = 0;
    for(i = 0;i <= 6;i++)
    {
        for(j = 0;j <= 6;j++)
        {
            if(guess[j] == arr[i])
            {
                k++;
                break;
            }
        }
    }
    printf("\n");
    printf("匹配%d个数字!\n",k);
    printf("中奖率:%d%\n",100 * k / 7);
    return 0;
}
