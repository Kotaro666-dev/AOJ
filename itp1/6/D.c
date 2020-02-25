/*
n×m  の行列 A と、m×1 の列ベクトルb を読み込み、
A と b の積を出力するプログラムを作成してください。

 */

#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int A[n][m];
    int b[m];
    int sum[n];
    int i, j;

    // prep init
    //A[n][m]
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            A[i][j] = 0;
        }
    }
    // b[m]
    for (i = 0; i < m; i++)
    {
        b[i] = 0;
    }
    // sum[n]
    for (i = 0; i < n; i++)
    {
        sum[i] = 0;
    }

    // input
    // A[n][m]
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
            // printf("A[%d][%d] = %d\n", i, j, A[i][j]);
        }
    }
    //b[m]
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        // printf("b[%d] = %d\n", i, b[i]);
    }

    // Check the contents of array
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < m; j++)
    //     {
    //         // printf("A[%d][%d] = %d\n", i, j, A[i][j]);
    //     }
    // }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            sum[i] = sum[i] + (A[i][j] * b[j]);
            // printf("%d sum[%d] = %d\n", i, j, sum[i]);
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n", sum[i]);
    }
    return (0);
}