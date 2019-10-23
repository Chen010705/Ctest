#include <stdio.h>

even(int n);

int main(void)
{
    int p, num;
    printf("please");
    scanf("%d", &num);
    p = even(num);
    printf("%d", p);
    if (p = 1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}

int even(int n)
{
    int i;
    if (n % 2 == 0)
        i = 1;
    else
        i = 0;
    return i;
}