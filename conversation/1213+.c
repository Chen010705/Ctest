/*上一题的另一种解法同时调用函数*/
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
    for (i = 100; i < 200; i++)
    {
        if (is_prime(i, j) == 1)
        {
            printf("%d ", i);
            Count++;
            if (Count % 5 == 0)
                printf("\n");
        }
    }
}