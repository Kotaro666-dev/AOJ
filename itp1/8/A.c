/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 16:53:53 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/28 17:09:56 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
与えられた文字列の小文字と大文字を入れ替えるプログラムを作成してください。
 */

#include <stdio.h>

#define MAX 1200

int main(void)
{
    char string[MAX + 1];

    fgets(string, MAX + 1, stdin);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] += 'A' - 'a';
        }
        else if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] -= 'A' - 'a';
        }
    }
    printf("%s", string);
    return (0);
}