/*
自力では解けなかった。
参考サイト：http://eromog.hatenablog.com/entry/2015/05/18/023625
 */

/*
次のC++言語のプログラムと同じ動作をするプログラムを作成してください。ただし、goto 文は使わないで実装してみましょう。

void call(int n){
  int i = 1;
 CHECK_NUM:
  int x = i;
  if ( x % 3 == 0 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
 INCLUDE3:
  if ( x % 10 == 3 ){
    cout << " " << i;
    goto END_CHECK_NUM;
  }
  x /= 10; -> 1桁ずつ下げて、下一桁が3になるかどうかをチェックしている
  if ( x ) goto INCLUDE3;
 END_CHECK_NUM:
  if ( ++i <= n ) goto CHECK_NUM;

  cout << endl;
}
 */

// 例：n = 30
// output: 3 6 9 12 13 15 18 21 23 24 27 30

#include <stdio.h>

int main(void)
{
    int n;
    int i, x;

    scanf("%d", &n);

    for (i = 3; i <= n; i++)
    {
        x = i;
        if (i % 3 == 0)
            printf(" %d", i);
        else
        {
            do {
                if (x % 10 == 3)
                {
                    printf(" %d", i);
                    break ;
                }
                x /= 10;
            }
            while(x != 0);
        }
    }
    printf("\n");
    return (0);
}