/*
以下のような、たてH cm よこ W cm の枠を描くプログラムを作成して下さい。
##########
#........#
#........#
#........#
#........#
##########
上図は、たて 6 cm よこ 10 cm の枠を表しています。
 */

#include <stdio.h>

int main(void)
{
    int height, width;
    int i, j;

    for (;;)
    {
        scanf("%d %d", &height, &width);
        if (height == 0 && width == 0)
            break;
        for (i = 0; i < height; i++)
        {
            for (j = 0; j < width; j++)
            {
                // 2行目からheight - 1行目の出力（ex: #.....#）
                if (i != 0 && i != height - 1)
                {
                    if (j != 0 && j != width - 1)
                        printf(".");
                    else
                        printf("#"); 
                }
                // 最初と最後の行の出力（ex: ###########）
                else
                {   
                    printf("#");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return (0);
}