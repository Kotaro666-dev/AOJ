/*
半径 r の円の面積と円周の長さを求めるプログラムを作成して下さい。
 */

#include <stdio.h>

int main(void)
{
    double radius;
    double area, circumference, pi;

    pi = 3.141592653589;
    scanf("%lf", &radius);

    area = radius * radius * pi;
    circumference = (radius + radius) * pi;
    
    printf("%.8lf %.8lf\n", area, circumference);
    return (0);
}

/* 
Wrong Answer発生
1. 原因はradiusをint型で定義していた→double型に変換
2. area, circumferenceの出力を%fでやっていた→%.8lfに変換
→AC
*/