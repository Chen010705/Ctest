#include <stdio.h>
int main(void)
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 20; j++)
            if (i == j || i == 10 - j || j == 10 + i || i == 20 - j)
                printf("w");
            else if (j == 10)
                continue;
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}