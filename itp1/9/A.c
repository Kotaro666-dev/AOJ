/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 21:45:52 by kotaro666         #+#    #+#             */
/*   Updated: 2020/02/28 23:24:24 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
１つの単語 W と文章 T が与えられます。T の中にある W の数を出力するプログラムを作成して下さい。

文章 T に含まれるスペースまたは改行で区切られた文字列を単語 Ti とします。すべての Ti において単語 W と同じになるものを数えて下さい。

なお、大文字と小文字は区別しません。
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 1000

int main(void)
{
    char word[11];
    scanf("%s", word);
    int length = strlen(word);
    int found = 0;

    char text[MAX + 1];
    while (scanf("%s", text))
    {
        // scanf("%s", text);
        if (strcmp(text, "END_OF_TEXT") == 0)
            break;
        // for (int i = 0; i < strlen(text); i++)
        // {
        //     if (text[i] >= 'A' && text[i] <= 'Z')
        //         text[i] -= 'A' - 'a';
        // }
        for (int i = 0; i < strlen(text); i++)
        {
            text[i] = tolower(text[i]);
        }
        if (strcmp(text, word) == 0)
            found++;
    }
    printf("%d\n", found);
    return 0;
}

/* 
int main(void)
{
    char word[MAX + 1];
    scanf("%s", word);
    int length = strlen(word);
    int found = 0;

    char character;

    // for (;;)
    while (scanf("%c", &character) != EOF)
    {
        // scanf("%c", &character);
        if (character >= 'A' && character <= 'Z')
        {
            character -= 'A' - 'a';
        }
        for (int i = 0; i < length; i++)
        {
            if (character != word[i])
                break;
            if (i == length - 1)
            {
                found++;
            }
        }

        // if (character == 'E')
        // {
        //     char string[11];
        //     char cmp_string[11] = "ND_OF_TEXT";
        //     fgets(string, 11, stdin);
        //     for (int i = 0; string[i] != '\0'; i++)
        //     {
        //         if (strcmp(string, cmp_string) != 0)
        //             break;
        //         if (i == 10)
        //             end = 1;
        //     }
        // }
        // if (end == 1)
        //     break;
    }
    printf("%d\n", found);
    return 0;
}
*/