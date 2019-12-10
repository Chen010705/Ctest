#include <stdio.h>
#define N 10

int formax(int max)
{
    int i, a[10];
    max = a[0];
    for (i = 0; i < N; i++)
        if (max <= a[i])
            max = a[i];
    return max;
}

int main(void)
{
    int a[10], i, max;
    printf("Input the 10 number:\n");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    max = formax(max);
    printf("%d ", max);

    return 0;
}
