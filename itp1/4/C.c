/*
２つの整数 a, b と１つの演算子 op を読み込んで、a op b を計算するプログラムを作成して下さい。
ただし、演算子 op は、"+"(和)、"-"(差)、"*"(積)、"/"(商)、のみとし、
割り算で割り切れない場合は、小数点以下を切り捨てたものを計算結果とします。
 */

#include <stdio.h>

int main(void)
{
    int a, b;
    char op; // + or - or * or /
    int i;

    for(i = 0; op != '?'; i++)
    {
        scanf ("%d %c %d", &a, &op, &b);
        if (op == '+')
            printf("%d\n", a + b);
        else if (op == '-')
            printf("%d\n", a - b);
        else if (op == '*')
            printf("%d\n", a * b);
        else if (op == '/')
            printf("%d\n", a / b);
        else
            break ;
    }
    return (0);
}