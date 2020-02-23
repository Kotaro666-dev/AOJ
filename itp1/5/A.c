/*
自力では解けなかった。
参考サイト：http://eromog.hatenablog.com/entry/2015/05/18/023625
 */

/*
たてH cm よこ W cm の長方形を描くプログラムを作成して下さい。
1 cm × 1cm の長方形を '#'で表します。
 */

// Time Limit Exceeded
// 修正箇所：最初に考えてた方法はTLE。その原因はコードを複雑にしてしまっていた。反省。

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
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
    return (0);
}

/*
void print_out(int height, int width)
{
    int i, j;

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            printf("#");
        }
        i != height - 1 ? printf("\n") : printf("");
    }
    printf("\n");
}

int main(void)
{
    int height[300], width[300];
    int i, j, input_count = 0;

    // input the dataset
    for (i = 0; i < 300; i++)
    {
        scanf("%d %d", &height[i], &width[i]);

        // in case the first input is 0 0 -> solution for updating i counter
        if (i == 0 && (height[i] == 0 && width[i] == 0))
        {
            i++;
            break;
        }
        if (height[i] == 0 && width[i] == 0)
            break;
        else
            i++;
    }

    // output the result
    input_count = i;
    // printf("input_count = %d\n", input_count);

    // TEST
    // for (i = 0; i < input_count; i++)
    // {
    //     printf("%d %d\n", height[i], width[i]);
    // }

    for (i = 0; i < input_count; i++)
    {
        print_out(height[i], width[i]);
    }
    return (0);
}
*/