/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 15:19:25 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/01 15:29:51 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define TARO 0
#define HANAKO 1

int main(void)
{
    int game, win = 3, draw = 1;
    char taro[101], hanako[101];
    int score[2] = {0, 0};

    scanf("%d", &game);
    for (int i = 0; i < game; i++)
    {
        scanf("%s %s", taro, hanako);
        int result = strcmp(taro, hanako);
        if (result < 0)
            score[HANAKO] += win;
        else if (result == 0)
        {
            score[TARO] += draw;
            score[HANAKO] += draw;
        }
        else
        {
            score[TARO] += win;
        }
    }
    printf("%d %d\n", score[TARO], score[HANAKO]);
    return 0;
}
