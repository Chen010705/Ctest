/*4. ���1000���ڵ�ˮ�ɻ���
˵������ν"ˮ�ɻ���"��ָһ3λ�������λ���������͵��ڸ�������
���磺153��һ��ˮ�ɻ�������Ϊ153=1+125+27��*/
#include <stdio.h>
int main()
{
    int num, sd, td, hd;
    for (num = 100; num < 1000; num++)
    {
        hd = num / 100;
        td = num % 100 / 10;
        sd = num % 10;
        if (num == hd * hd * hd + td * td * td + sd * sd * sd)
        {
            printf("Narcissistic number is:%d\n", num);
        }
    }
    return 0;
}