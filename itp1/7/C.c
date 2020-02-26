/*
表計算を行う簡単なプログラムを作成します。

表の行数rと列数c、r × c の要素を持つ表を読み込んで、
各行と列の合計を挿入した新しい表を出力するプログラムを作成して下さい。
 */

#include <stdio.h>

int main(void)
{
    int row, column;
    scanf("%d %d", &row, &column);

    int sheet[row + 1][column + 1];
    int i, j;

    // prep init sheet
    for(i = 0; i < row + 1; i++)
    {
        for(j = 0; j < column + 1; j++)
        {
            sheet[i][j] = 0;
        }
    }

    int sum;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            scanf("%d", &sheet[i][j]);
        }
    }

    // Check if the input was successful
    // printf("\n----TEST----\n");
    // for(i = 0; i < row + 1; i++)
    // {
    //     for(j = 0; j < column + 1; j++)
    //     {
    //         printf("%d ", sheet[i][j]);
    //     }
    //     printf("\n");
    // }

    // input the sum of row
    for(i = 0; i < row; i++)
    {
        sum = 0;
        for(j = 0; j < column; j++)
        {
            sum += sheet[i][j];
            if (j == column - 1)
                sheet[i][column] = sum;
        }
    }

    // input the sum of column
    int all_sum = 0;
    for(i = 0; i < column; i++)
    {
        sum = 0;
        for(j = 0; j < row; j++)
        {
            sum += sheet[j][i];
            if (j == row - 1)
            {
                sheet[row][i] = sum;
                all_sum += sum;
            }
        }
    }

    // input the all_sum
    sheet[row][column] = all_sum;

    // Print out the result
    for(i = 0; i < row + 1; i++)
    {
        for(j = 0; j < column + 1; j++)
        {
            printf("%d", sheet[i][j]);
            j == column ? printf("\n") : printf(" ");
        }
    }
    return (0);
}