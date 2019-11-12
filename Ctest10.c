#include <stdio.h>
int main(void)
{
    int x1, x2, max;
    printf("输入两个整数x1,x2:");
    scanf("%d,%d", &x1, &x2);
    if (x1 < x2)
        max = x2;
    else
        max = x1;
    printf("较大值是%d", max);

    return 0;
}