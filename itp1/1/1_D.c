/*
秒単位の時間 S が与えられるので、h:m:s の形式へ変換して出力してください。ここで、h は時間、m は 60 未満の分、s は 60 未満の秒とします。
 */

#include <stdio.h>

int main(void)
{
    int S;
    int hour, minute, second;
    int hour_in_second, minute_in_second;

    hour = minute = second = 0;
    hour_in_second = 60 * 60; // 1 hour = 3600sec
    minute_in_second = 60;    // 1 minute = 60 sec
    scanf("%d", &S);

    if (S >= (hour_in_second))
        {
        hour = S / hour_in_second;
        S %= hour_in_second;
    }
    if (S < (hour_in_second) && S >= (minute_in_second))
    {
        minute = S / minute_in_second;
        S %= minute_in_second;
    }
    if (S < (minute_in_second))
    {
        second = S;
    }
    
    printf("%d:%d:%d\n", hour, minute, second);
    return (0);
}