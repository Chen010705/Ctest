#include <stdio.h>
int main(void)
{
    int x1, x2, max;
    printf("������������x1,x2:");
    scanf("%d,%d", &x1, &x2);
    if (x1 < x2)
        max = x2;
    else
        max = x1;
    printf("�ϴ�ֵ��%d", max);

    return 0;
}