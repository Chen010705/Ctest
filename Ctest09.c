#include <stdio.h>
int main(void)
{
    int x;
    printf("����һ������x:");
    scanf("%d", &x);
    if (x < 0)
    {
        x = -x;
    }
    printf("��������ľ���ֵΪ%d", x);

    return 0;
}