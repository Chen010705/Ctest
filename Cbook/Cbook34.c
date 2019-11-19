#include <stdio.h>
int main(void)
{
    int i, x1, x2, x, n;

    x1 = 1;
    x2 = 1;
    printf("%6d%6d", x1, x2);
    printf("n=%d");
    scanf("%d", &n);
    for (i = 1; i <= n - 2; i++)
    {
        x = x1 + x2;
        printf("%6d", x);
        x1 = x2;
        x2 = x;
    }
    printf("\n");

    return 0;
} /*P087*/