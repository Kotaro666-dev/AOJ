/*
以下のような、たてH cm よこ W cm のチェック柄の長方形を描くプログラムを作成して下さい。

#.#.#.#.#.
.#.#.#.#.#
#.#.#.#.#.
.#.#.#.#.#
#.#.#.#.#.
.#.#.#.#.#
上図は、たて 6 cm よこ 10 cm の長方形を表しています。
長方形の左上が "#" となるように描いて下さい。
 */

#include <stdio.h>

void print_field(int column, int row)
{
    // 奇数列の出力 column
    if (column % 2 != 0)
    {
        // 奇数行の出力
        if (row % 2 != 0)
            printf("#");
        // 偶数行の出力
        else
            printf(".");
    }
    // 偶数列の出力 column
    else
    {
        // 奇数行の出力
        if (row % 2 != 0)
            printf(".");
        // 偶数行の出力
        else
            printf("#");
    }
}

int main(void)
{
    int height, width;
    int column, row;

    for(;;)
    {
        scanf("%d %d", &height, &width);
        if (height == 0 && width == 0)
            break;
        
        // カウンターiとjは1スタート <- ○行目とわかりやすくするため
        for (column = 1; column <= height; column++)
        {
            for (row = 1; row <= width; row++)
            {
                print_field(column, row);
            }
            printf("\n");
        }
        printf("\n");
    }
    return (0);
}