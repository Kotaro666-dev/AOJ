/*
与えられた数列を逆順に出力するプログラムを作成して下さい。
 */

#include <stdio.h>

int main(void)
{
    int n, a[100], i, length = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    length = i - 1;

    for (i = length; i >= 0; i--)
    {
        printf("%d", a[i]);
        if (i != 0)
            printf(" ");
        else
            printf("\n");
    }
    return (0);
}