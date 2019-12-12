#include <stdio.h>
#define N 10

int formin(int a[],int n)
{
    int i, j, min;
    min = 0;
    for (j = 0; j < N; j++)
        for (i = 0; i < N; i++)
            if (min >= a[i])
                min = i;
    return min;
}

int main(void)
{
    int a[N], i, min;
    printf("Input the 10 number:\n");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    min = formin(a, N);
    printf("%d ", a[min]);

    return 0;
}