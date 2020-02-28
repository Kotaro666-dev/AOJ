/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 17:43:46 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/28 20:02:45 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
与えられた英文に含まれる、各アルファベットの数を数えるプログラムを作成して下さい。
なお、小文字と大文字は区別しません。
*/

#include <stdio.h>

int main(void)
{
    int count[26];
    char c;
    // Init count array
    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
    }

    while (scanf("%c", &c) != EOF)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c -= 'A' - 'a';
        }
        count[c - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c : %d\n", (char)(i + 97), count[i]);
    }
    return 0;
}

/* 
    MY IDEA 
    複数行の文字列入力に対応できず。一行であれば可能
*/
/* 
#define MAX 1200

void to_lowercase(char *string)
{
    int i;

    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] -= 'A' - 'a';
        }
    }
}

int main(void)
{
    int i, j, k;
    char string[MAX + 1];
    // アルファベットの数をカウントする配列を初期化
    int alphabet[26];
    for (i = 0; i < 26; i++)
    {
        alphabet[i] = 0;
    }

    for (k = 0; k < 5; k++)
    {

        fgets(string, MAX + 1, stdin);

        //　大文字を全て小文字へ
        to_lowercase(&string[MAX + 1]);
        // for (i = 0; string[i] != '\0'; i++)
        // {
        //     if (string[i] >= 'A' && string[i] <= 'Z')
        //     {
        //         string[i] -= 'A' - 'a';
        //     }
        // }

        // それぞれのアルファベット出現回数をカウントして、配列にそのカウントをインクリメントする
        int base = 97;
        for (i = 0; string[i] != '\0'; i++)
        {
            for (j = 0; j < 26; j++)
            {
                if (string[i] == base + j)
                {
                    alphabet[j]++;
                }
            }
        }
    }

    //　結果出力
    char character = 'a';
    for (i = 0; i < 26; i++, character++)
    {
        printf("%c : %d\n", character, alphabet[i]);
    }
    return 0;
}
*/