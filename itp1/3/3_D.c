/*
３つの整数 a、b、c を読み込み、a から b までの整数の中に、c の約数がいくつあるかを求めるプログラムを作成してください
 */

#include <stdio.h>

int main(void)
{
    int a, b, c;
    int i, counter = 0;

    scanf("%d %d %d", &a, &b, &c);

    for(i = a; i <= b; i++)
    {
        if (c % i == 0)
        {
            counter++;
        }
    }
    printf("%d\n", counter);
    return (0);
}