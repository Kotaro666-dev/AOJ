/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:09:35 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/01 15:05:05 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define MAX 200

int main(void)
{
    char string[MAX + 1];
    int h, repeat_num[100];

    // while (scanf("%s", string) != '-')
    for (;;)
    {
        scanf("%s", string);
        if (string[0] == '-')
            return 0;
        scanf("%d", &h);
        for (int i = 0; i < h; i++)
        {
            scanf("%d", &repeat_num[i]);
        }

        char replace;
        int i, j, k;
        for (i = 0; i < h; i++)
        {
            for (j = 0; j < repeat_num[i]; j++)
            {
                for (k = 0; k < strlen(string) - 1; k++)
                {
                    replace = string[k];
                    string[k] = string[k + 1];
                    string[k + 1] = replace;
                }
                // printf("TEST %d: %s\n", j, string);
            }
        }
        printf("%s\n", string);
    }
    return (0);
}