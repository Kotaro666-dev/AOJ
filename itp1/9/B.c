/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:09:35 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/01 15:42:07 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
    This site shows a useful tip: https://www.geeksforgeeks.org/array-rotation/
 */

#include <stdio.h>
#include <string.h>

#define MAX 200

int main(void)
{
    char string[MAX + 1];
    int h, repeat_num[100];
    int i, j, k;

    // while (scanf("%s", string) != '-')
    for (;;)
    {
        scanf("%s", string);
        // if (string[0] == '-')
        //     return 0;
        if (strcmp(string, "-") == 0)
            break;
        scanf("%d", &h);
        for (i = 0; i < h; i++)
        {
            scanf("%d", &repeat_num[i]);
        }

        char temp;
        for (i = 0; i < h; i++)
        {
            for (j = 0; j < repeat_num[i]; j++)
            {
                for (k = 0; k < strlen(string) - 1; k++)
                {
                    temp = string[k];
                    string[k] = string[k + 1];
                    string[k + 1] = temp;
                }
                // printf("TEST %d: %s\n", j, string);
            }
        }
        printf("%s\n", string);
    }
    return (0);
}