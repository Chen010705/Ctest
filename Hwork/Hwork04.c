#include <stdio.h>
int main(void)
{
    int x;
    double money;
    printf("�������û����õ�����");
    scanf("%dkW��h",&x);
    if (x <= 50)
        money = 0.53 * x;
    else
        money = 26.5 + 0.58 * (x-50);
    printf("�û�Ӧ֧���ĵ��Ϊ:%.2f",money);

    return 0;
}