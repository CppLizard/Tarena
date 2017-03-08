/*
 *      扫雷游戏
 * */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[10][10] = {0};
    int delta[8][2] = {-1, -1, -1, 0, -1, 1, 0, -1, 0, 1, 1, -1, 1, 0, 1, 1};
    int i = 0;
    int j = 0;
    int num = 0;
    int row = 0;
    int col = 0;
    int cnt = 0;
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
    for (row = 1; row <= 10; row++)
    {
        for (col = 1; col <= 10; col++)
        {
            if (arr[row][col] != -1)
            {
                continue;
            }
            for (num = 0; num < 8; num++)
            {
                int tmp_row = row + delta[num][0];
                int tmp_col = col + delta[num][1];
                if (tmp_row < 1 || tmp_row > 10)
                {
                    continue;
                }
                if (tmp_col < 1 || tmp_col > 10)
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
    for (row = 1; row <= 10; row++)
    {
        for (col = 1; col <= 10; col++)
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
                printf("%d ", arr[row][col]);
            }
        }
        printf("\n");
    }
    do
    {
        printf("请输入地雷坐标:");
        scanf("%d %d", &i, &j);
        if (i <= 0 || j <= 0)
        {
            for (row = 1; row <= 10; row++)
            {
                for (col = 1; col <= 10; col++)
                {
                    printf("* ");
                }
                printf("\n");
            }
        }
        else
        {
            printf("%d\n", arr[i][j]);
            arr[row][col] = arr[i][j];
            for (row = 1; row <= 10; row++)
            {
                for (col = 1; col <= 10; col++)
                {
                    if (i == row && j == col)
                    {
                        if (!arr[row][col])
                        {
                            printf("O ");
                        }
                        else if (arr[row][col] == -1)
                        {
                            printf("X ");
                        }
                        //else if(arr[row][col] = arr[i][j])
                        //{
                        //    printf("%d ", arr[i][j]);
                        //}
                        else
                        {
                            printf("%d ", arr[row][col]);
                        }
                    }
                    else
                    {
                        printf("* ");
                    }
                }
                printf("\n");
            }
        }
    }
    while(1);
    return 0;
}
