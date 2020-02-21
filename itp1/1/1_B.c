/*
１つの整数 x を読み込んで、x の３乗を計算し結果を出力するプログラムを作成して下さい。
 */

#include <stdio.h>

int main(void)
{
    int x, cube;

    scanf("%d", &x);
    cube = x * x * x;
    printf("%d\n", cube);
}