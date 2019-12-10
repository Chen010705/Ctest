#include <stdio.h>
#define N 10
int main(void)
{
    int a[10], i, index;
    printf("Input the 10 number:\n");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    for (i = 0; i <10; i++)
    {
        if (a[i+1] < a[i])
        {
            index=a[i];
            a[i] = a[i+1];
            a[i+1]=index;
        }
    }
    printf("%d ", a[9]);

    return 0;
}