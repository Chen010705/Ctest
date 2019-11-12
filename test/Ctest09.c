#include <stdio.h>
int main(void)
{
    int x;
    printf("输入一个整数x:");
    scanf("%d", &x);
    if (x < 0)
    {
        x = -x;
    }
    printf("这个整数的绝对值为%d", x);

    return 0;
}