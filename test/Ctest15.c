#include <stdio.h>
int main(void)
{
    int n, sum, i;
    sum=0;
    printf("input n:");
    scanf("%d",&n);
    while (n % 10 != 0)
    {
        sum += n % 10;
        n=n/10;
    }
    printf("sum=%d:",sum);

    return 0;
}