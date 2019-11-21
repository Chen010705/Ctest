#include <stdio.h>
int main(void)
{
    int a, n, i, j, sum, num;
    a=0;
    n=0;
    sum = 0;
    num = 0;
    printf("input a:");
    scanf("%d", &a);
    printf("input n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            a = a * 10 + 2;
        }
        sum += a;
    }
    printf("sum=%d", sum);
}