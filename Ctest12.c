#include <stdio.h>
int main()
{
    int n;

    printf("�������n:");
    scanf("%d", &n);
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
    {
        printf("%d������", n);
    }
    else
    {
        printf("%d��������", n);
    }

    return 0;
}