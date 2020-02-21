/*
２つの整数 a, b を読み込んで、a と b の大小関係を出力するプログラムを作成して下さい。
 */

#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a < b)
    {
        printf("a < b\n");
    }
    else if (a > b)
    {
        printf("a > b\n");
    }
    else
    {
        printf("a == b\n");
    }
    return (0);
}