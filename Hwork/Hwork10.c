#include <stdio.h>
int main(void)
{
    int i, j, k;
    for (i = 0; i <= 20; i++)
        for (j = 0; j <= 33; j++)
            for (k = 0; k <= 100; k++)
            {
                if (5 * i + 3 * j + k / 3 == 100 && k % 3 == 0 && i + j + k == 100)
                {
                    printf("%d,%d,%d\n", i, j, k);
                }
            }
    return 0;
}