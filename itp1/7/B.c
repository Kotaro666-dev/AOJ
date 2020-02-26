/*
1 から n までの数の中から、重複無しで３つの数を選びそれらの合計が x となる組み合わせの数を求めるプログラムを作成して下さい。

例えば、1 から 5 までの数から３つを選んでそれらの合計が 9 となる組み合わせは、

1 + 3 + 5 = 9
2 + 3 + 4 = 9
の２通りがあります。
 */

#include <stdio.h>

int check_num_pattern(int num, int sum)
{
    int i, j, k;
    int pattern;

    pattern = 0;
    for (i = 1; i <= num; i++)
    {
        for (j = i + 1; j <= num; j++)
        {
            for (k = j + 1; k <= num; k++)
            {
                if (i + j + k == sum)
                {
                    // printf("set: %d %d %d\n", i, j, k);
                    pattern++;
                }
            }
        }
    }
    return (pattern);
}

int main(void)
{
    int num[100], sum[100], dataset = 0;
    int i;
    
    for(i = 0;;i++)
    {
        scanf("%d %d", &num[i], &sum[i]);
        if (num[i] == 0 && sum[i] ==0)
            break;
        dataset++;
    }

    int result[dataset];
    for (i = 0; i < dataset; i++){
        result[i] = check_num_pattern(num[i], sum[i]);
    }

    for (i = 0; i < dataset; i++)
    {
        printf("%d\n", result[i]);
    }
    return (0);
}