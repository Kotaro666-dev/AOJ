/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 17:11:05 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/28 17:38:41 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
与えられた数の各桁の和を計算するプログラムを作成して下さい。
 */

#include <stdio.h>

int main()
{
    char num;
    int sum, i;

    for (;;)
    {
        sum = 0;
        for (;;)
        {
            int tmp;
            scanf("%c", &num);
            if (num == '\n')
            {
                printf("%d\n", sum);
                break;
            }
            else
            {
                tmp = num - '0';
                sum += tmp;
            }
            if (sum == 0)
            {
                return 0;
            }
        }
    }
    return (0);
}

/* 
My idea
1000桁の数字ということを読み忘れていた 
*/
/* 
int calc_sum_digit(int num)
{
    int sum = 0;

    // ベースライン
    if (num <= 9)
    {
        sum = num;
        return sum;
    }

    // 再帰ステップ
    if (num > 9)
    {
        sum += (num % 10);
        sum += calc_sum_digit(num / 10);
    }
    return sum;
}

int main(void)
{
    int dataset[100];
    int i, end, sum[100];

    for (i = 0;; i++)
    {
        scanf("%d", &dataset[i]);
        if (dataset[i] == 0)
            break;
    }
    end = i;

    for (i = 0; i < end; i++)
    {
        sum[i] = calc_sum_digit(dataset[i]);
    }

    for (i = 0; i < end; i++)
    {
        printf("%d\n", sum[i]);
    }
    return (0);
}

*/