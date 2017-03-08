/*      
 *      11112
 *      40002
 *      40002
 *      40002
 *      43333
 *      把以上25个数字填充到一个二维数组里
 *      然后再按照这个格式显示在屏幕上
 *      只有0可以用初始化的方法填到二维数组里
 * */
#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int arr[5][5] = {0};
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == 0 && j <= 3)
            {
                arr[i][j] = 1;
            }
            else if (i <= 3 && j == 4)
            {
                arr[i][j] = 2;
            }
            else if (i == 4 && j > 0)
            {
                arr[i][j] = 3;
            }
            else if (i >= 1 && j == 0)
            {
                arr[i][j] = 4;
            }
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
