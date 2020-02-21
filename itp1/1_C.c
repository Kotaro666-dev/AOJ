/*
たて a cm よこ b cm の長方形の面積と周の長さを求めるプログラムを作成して下さい。
 */
#include <stdio.h>

int main(void)
{
    int a; // length
    int b; // breadth
    int area;
    int perimeter;

    scanf("%d %d", &a, &b);

    area = a * b;
    perimeter = (a * 2) + (b * 2);

    printf("%d %d\n", area, perimeter);
    return (0);
}