/*
２つの整数 x, y を読み込み、それらを値が小さい順に出力するプログラムを作成して下さい。
 */

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x, y;
    int i;

    for(i = 0; i < 3000; i++)
    {
        scanf("%d %d", &x, &y);
        if (x == 0 && y == 0)
        {
            return (0);
        }
        else
        {
            if (x > y)
                swap(&x, &y);
            printf("%d %d\n", x, y);
        }
    }
    return (0);
}