/*
３つの整数を読み込み、それらを値が小さい順に並べて出力するプログラムを作成して下さい。
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
    int array[3];
    int i, j;

    for(i = 0; i < 3; i++)
    {
        scanf("%d", &array[i]);
    }

    // sorting
    for(i = 0; i < 2; i++)
    {
        for(j = i + 1; j < 3; j++)
        {
            if (array[i] > array[j])
            {
                swap(&array[i], &array[j]);
            }
        }
    }
    printf("%d %d %d\n", array[0], array[1], array[2]);
    return (0);
}