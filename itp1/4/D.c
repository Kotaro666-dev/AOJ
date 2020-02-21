/*
n  個の整数 ai(i=1,2,...n)を入力し、それらの最小値、最大値、合計値を求めるプログラムを作成してください。
 */

#include <stdio.h>

int find_min_num(int *array, int n);
int find_max_num(int *array, int n);
long int calc_sum(int *array, int n);

int main(void)
{
    int n;
    int a[10000];
    int i, min, max;
    long int sum;

    scanf("%d\n", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = max = sum = 0;
    min = find_min_num(a, n);
    max = find_max_num(a, n);
    sum = calc_sum(a, n);

    printf("%d %d %ld\n", min, max, sum);
    return (0);
}

int find_min_num(int *array, int n)
{
    int min, i;
    
    min = array[0];
    for(i = 0; i < n; i++)
    {
        if (min > array[i])
            min = array[i];
    }
    return (min);
}

int find_max_num(int *array, int n)
{
    int max, i;
    
    max = array[0];
    for(i = 0; i < n; i++)
    {
        if (max < array[i])
            max = array[i];
    }
    return (max);
}

long int calc_sum(int *array, int n)
{
    long int sum;
    int i;

    sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return (sum);
}

/*
Error発生
int型で定義したsumがint型の最大値をover→int型からlong int型へ変換
→AC
 */