#include <stdio.h>
int main(void)
{
    int a, n, i, num, sum;
    sum = 0;
    printf("input a:");
    scanf("%d", &a);
    printf("input n:");
    scanf("%d", &n);
    num = a;
    for (i = 1; i < n; i++)
    {
        num = num * 10 + 2;
        sum += num;
    }
    sum += a;
    printf("sum=%d", sum);
}