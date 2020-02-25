/*
Ａ大学は１フロア１０部屋、３階建ての公舎４棟を管理しています。公舎の入居・退去の情報を読み込み、各部屋の入居者数を出力するプログラムを作成して下さい。

n件の情報が与えられます。各情報では、４つの整数b, f, r, vが与えられます。これは、b棟f階のr番目の部屋にv人が追加で入居したことを示します。vが負の値の場合、-v人退去したことを示します。

最初、全ての部屋には誰も入居していないものとします。
 */

#include <stdio.h>

int main(void)
{
    int n;
    int building, floor, room;
    int infobox[5][4][11];
    // order : building, floor, room
    int person;
    int i, j, k;

    //prep init
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 4; j++)
        {
            for (k = 1; k < 11; k++)
            {
                infobox[i][j][k] = 0;
            }
        }
    }

    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &building, &floor, &room, &person);
        infobox[building][floor][room] = infobox[building][floor][room] + person;
    }

    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 4; j++)
        {
            for (k = 1; k < 11; k++)
            {
                if (i == 1)
                {
                    printf(" %d", infobox[i][j][k]);
                    k != 10 ? printf("") : printf("\n");
                }
                else if (i == 2)
                {
                    printf(" %d", infobox[i][j][k]);
                    k != 10 ? printf("") : printf("\n");
                }
                else if (i == 3)
                {
                    printf(" %d", infobox[i][j][k]);
                    k != 10 ? printf("") : printf("\n");
                }
                else if (i == 4)
                {
                    printf(" %d", infobox[i][j][k]);
                    k != 10 ? printf("") : printf("\n");
                }
                if ((j == 3 && k == 10) && (i != 4))
                {
                    printf("####################\n");
                }
            }
        }
    }
    return (0);
}

/* 当初、プリントアウト用の関数に3次元配列infoboxを渡して出力しようと思っていたものの、
    値の渡し方が分からずに、main関数ですべて行った */

// void print_out(int building, int floor, int room, int person)
// void print_out(int infobox[5][4][11])
// {
//     // int infobox[5][4][11];
//     int i, j, k;

//     // infobox[building][floor][room] = person;
//     for (i = 1; i < 5; i++)
//     {
//         for (j = 1; j < 4; j++)
//         {
//             for (k = 1; k < 11; k++)
//             {
//                 if (i == 1)
//                 {
//                     printf("%d", infobox[i][j][k]);
//                     k != 10 ? printf(" ") : printf("\n");
//                 }
//                 else if (i == 2)
//                 {
//                     printf("%d", infobox[i][j][k]);
//                     k != 10 ? printf(" ") : printf("\n");
//                 }
//                 else if (i == 3)
//                 {
//                     printf("%d", infobox[i][j][k]);
//                     k != 10 ? printf(" ") : printf("\n");
//                 }
//                 else if (i == 4)
//                 {
//                     printf("%d", infobox[i][j][k]);
//                     k != 10 ? printf(" ") : printf("\n");
//                 }
//                 if (j == 3 && k == 10)
//                 {
//                     printf("####################\n");
//                 }
//             }
//         }
//     }
// }