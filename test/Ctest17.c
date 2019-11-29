#include <stdio.h>

int max(int a, int b)
{
    if (b > a)
        return b;
    else
        return a;
}

int main(void)
{
    int x, y;
    printf("Enter x and y:\n");
    scanf("%d %d", &x, &y);

    printf("Max is %d\n",max(x, y));

    return 0;
}