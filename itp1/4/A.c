/*
２つの整数 a と b を読み込んで、以下の値を計算するプログラムを作成して下さい：

a ÷ b ： d (整数)
a ÷ b の余り ： r (整数)
a ÷ b ： f (浮動小数点数)
 */

#include <stdio.h>

int main(void)
{
    int a, b;
    int devision, remainder;
    double double_point;

    devision = remainder = 0;
    double_point = 0.0;

    scanf("%d %d", &a, &b);

    devision = a / b;
    remainder = a % b;
    double_point = (double)a / (double)b;

    // Floatの箇所で問題あり？
    // 修正箇所：float型→double型へ変換して演算→AC
    printf("%d %d %f\n", devision, remainder, double_point);
    return (0);
}