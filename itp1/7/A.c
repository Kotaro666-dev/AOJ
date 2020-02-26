/*
あなたの課題は、あるクラスの数学の成績を付けるプログラムを作成することです。

プログラムは複数の学生のテストの点数を読み込みます。

テストの点数は、中間試験の点数 m、期末試験の点数 f、再試験の点数 r で構成されています。

中間試験と期末試験は 50 点満点（m, f ≤ 50）、再試験は 100 点満点 （r ≤ 100）です。

試験を受けていない場合は点数を -1 とします。

以下の手順で成績が付けられます：

中間試験、期末試験のいずれかを欠席した場合成績は F。
中間試験と期末試験の合計点数が 80 以上ならば成績は A 。
中間試験と期末試験の合計点数が 65 以上 80 未満ならば成績は B。
中間試験と期末試験の合計点数が 50 以上 65 未満ならば成績は C。
中間試験と期末試験の合計点数が 30 以上 50 未満ならば成績は D。 ただし、再試験の点数が 50 以上ならば成績は C。
中間試験と期末試験の合計点数が 30 未満ならば成績は F。
 */

#include <stdio.h>

#define MIDTERM 0
#define FINAL 1
#define RETRY 2

void print_result(int midterm, int final, int retry)
{
    int sum;

    sum = midterm + final;
    if (midterm == -1 || final == -1)
    {
        printf("F\n");
        return;
    }
    else if (sum >= 80)
    {
        printf("A\n");
        return;
    }
    else if (sum >= 65 && sum < 80)
    {
        printf("B\n");
        return;
    }
    else if (sum >= 50 && sum < 65)
    {
        printf("C\n");
        return;
    }
    else if (sum >= 30 && sum < 50)
    {
        if (retry >= 50)
        {
            printf("C\n");
            return;
        }
        else
        {
            printf("D\n");
            return;
        }
    }
    else if (sum < 30)
    {
        printf("F\n");
        return;
    }
}

int main(void)
{
    int score[50][3];
    int student;
    int i, j;

    for (;;)
    {
        scanf("%d %d %d", &score[i][MIDTERM], &score[i][FINAL], &score[i][RETRY]);
        if (score[i][MIDTERM] == -1 &&
            score[i][FINAL] == -1 &&
            score[i][RETRY] == -1)
            break;
        i++;
    }
    student = i;

    // Check if the input was successful
    // for (i = 0; i < student; i++)
    // {
    //     printf("%d: %d %d %d\n", i, score[i][MIDTERM], score[i][FINAL], score[i][RETRY]);
    // }

    for (i = 0; i < student; i++)
    {
        print_result(score[i][MIDTERM], score[i][FINAL], score[i][RETRY]);
    }
    return (0);
}