#include <stdio.h>
int main(void)
{
    int a, b, c, d;
    double e, f;
    printf("输入四个整数：");
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    f = a + b + c + d;
    e = f / 4.0;
    printf("%.1f", e);

    return 0;
}