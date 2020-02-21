/*
３つの整数a, b, cを読み込み、それらが a < b < cの条件を満たすならば"Yes"を、満たさないならば"No"を出力するプログラムを作成して下さい。
 */

#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    if (a < b && b < c)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return (0);
}