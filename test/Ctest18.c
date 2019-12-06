#include <stdio.h>
int is_prime(int i, int j)
{
    for (j = 2; j <= i; j++)
    {
        if (i != j)
            if (i % j == 0)
                break;
            else
                continue;
        else
            return 1;
    }
}

int main()
{
    int i, j, Count = 0;
    for (i = 2; i < 100; i++)
    {
        if (is_prime(i, j) == 1)
        {
            printf("%5d ", i);
            Count++;
            if (Count % 5 == 0)
            printf("\n");
        }
    }
}