/*
    Print test cases
 */

#include <stdio.h>

int main(void)
{
    int i, x;

    for(i = 0; i < 10000; i++)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            return (0);
        }
        else
        {
            printf("Case %d: %d\n", i + 1, x);
        }
    }
    return (0);
}