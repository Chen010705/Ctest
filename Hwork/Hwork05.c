#include <stdio.h>
int main(void)
{
    int money, time;
    double x;

    printf("��ʻ���x=");
    scanf("%lf", &x);
    printf("�ȴ�ʱ��time=��");
    scanf("%d", &time);
    money = 10 + (time / 5) * 2;
    if (x > 3)
    {
        if (x < 13)
            money = 10 + (x - 3) * 2 + (time / 5) * 2;
        else
            money = 30 + (x - 13) * 3 + (time / 5) * 2;
    }
    printf("money=%d", money);

    return 0;
}