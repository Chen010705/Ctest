#include <stdio.h>
int main(void)
{
    int x;
    double money;
    printf("请输入用户的用电量：");
    scanf("%dkW·h",&x);
    if (x <= 50)
        money = 0.53 * x;
    else
        money = 26.5 + 0.58 * (x-50);
    printf("用户应支付的电费为:%.2f",money);

    return 0;
}