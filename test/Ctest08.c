#include <stdio.h>
int main()
{
    int x, a, b, c;
    printf("请输入一位三位数：x=");
    scanf("%d", &x);
    a = x / 100;
    b = x % 100 / 10;
    c = x % 10;
    printf("256:%d-%d-%d\n", a, b, c);

    return 0;
}