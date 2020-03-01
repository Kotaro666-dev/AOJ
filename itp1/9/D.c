/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotaro666 <kotaro0726@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 16:21:21 by kotaro666         #+#    #+#             */
/*   Updated: 2020/03/01 16:44:31 by kotaro666        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define MAX 1000

void func_print(char string[], int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        printf("%c", string[i]);
    }
    printf("\n");
}

void func_reverse(char string[], int start, int end)
{
    // printf("TEST : %d %d\n", start, end);
    char temp;
    for (; start < end; start++)
    {
        // printf("before %d: %c, %d: %c\n", start, string[start], end, string[end]);
        temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        // printf("after %d: %c, %d: %c\n", start, string[start], end, string[end]);
        end--;
    }
}

void func_replace(char string[], int start, int end, char rep_string[])
{

    for (int i = 0, j = start; j <= end; i++, j++)
    {
        string[j] = rep_string[i];
    }
}

int main(void)
{
    char string[MAX + 1];
    int q_num;

    char question_name[8];

    char replace[] = "replace";
    char reverse[] = "reverse";
    char print[] = "print";

    scanf("%s", string);
    scanf("%d", &q_num);
    for (int i = 0; i < q_num; i++)
    {
        scanf("%s", question_name);
        if (strcmp(question_name, replace) == 0)
        {
            int start, end;
            scanf("%d %d", &start, &end);
            char rep_string[end - start + 1];
            scanf("%s", rep_string);
            func_replace(string, start, end, rep_string);
        }
        else if (strcmp(question_name, reverse) == 0)
        {
            int start, end;
            scanf("%d %d", &start, &end);
            func_reverse(string, start, end);
        }
        else if (strcmp(question_name, print) == 0)
        {
            int start, end;
            scanf("%d %d", &start, &end);
            func_print(string, start, end);
        }
    }
    return 0;
}