/*
 *      十行十列扫雷游戏
 *      1.随机显示十个地雷
 *      2.显示挨着地雷格子上的数字
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //创建一个10x10的二维数组
    int arr[10][10] = {0};
    //创建一个8x2的二维数组
    int delta[8][2] = {-1, -1,
                       -1, 0,
                       -1, 1,
                        0, -1,
                        0, 1,
                        1, -1,
                        1, 0,
                        1, 1};
    int row = 0;
    int col = 0;
    int cnt = 0;
    int num = 0;
    srand(time(0));
    do
    {
        row = rand() % 10;
        col = rand() % 10;
        if (!arr[row][col])
        {
            arr[row][col] = -1;
            cnt++;
        }
    }
    while(cnt < 10);
    for (row = 0; row < 10; row++)
    {
        for (col = 0; col < 10; col++)
        {
            if (arr[row][col] != -1)
            {
                continue;
            }
            for (num = 0; num < 8; num++)
            {
                int tmp_row = row + delta[num][0];
                int tmp_col = col + delta[num][1];
                if (tmp_row < 0 || tmp_row > 9)
                {
                    continue;
                }
                if (tmp_col < 0 || tmp_col > 9)
                {
                    continue;
                }
                if (arr[tmp_row][tmp_col] == -1)
                {
                    continue;
                }
                arr[tmp_row][tmp_col]++;
            }
        }
    }
    for (row = 0; row < 10; row++)
    {
        for (col = 0; col < 10; col++)
        {
            if (!arr[row][col])
            {
                printf("O ");
            }
            else if (arr[row][col] == -1)
            {
                printf("X ");
            }
            else
            {
                printf("%d ",arr[row][col]);
            }
        }
        printf("\n");
    }
    return 0;
}
