#include <stdio.h>
int main(void)
{
    int i, j, k;
    for (i = 2; i < 500; i++)
        for (j = 2; j <= i; j++)
        {
            if (i != j)
                if (i % j == 0)
                    break;
                else
                {
                    continue;
                }
            else
            {
                printf("%d ", i);
                k++;
                if (k % 10 == 0)
                    printf("\n");
            }
        }
    return 0;
}