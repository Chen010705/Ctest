#include <stdio.h>
int main(void)
{
    int i, j;
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
                printf("%d ", i);
        }
    return 0;
}