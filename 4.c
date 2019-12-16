#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%p", &a);
    scanf("%p", &b);
    c = a ^ b;
    printf("%p",c);

    return 0;
}