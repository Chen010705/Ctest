/*��Ŀ����ӡ�����е���λ-��λ"ˮ�ɻ���"��100-9999999������ν"ˮ�ɻ���"��ָһ��nλ�������λ����n�η��͵��ڸ�������*/
#include <stdio.h>
#include <math.h>
int main()
{
    long i, j, m, sum;
    double n, count;
    for (i = 100; i <= 9999999; i++)
    {
        count = 0;
        sum = 0;
        m = i;
        for (j = 1; j <= 7; j++)
        {
            m = m / 10;
            count++;
            if (m == 0)
                break;
        }
        m = i;
        for (j = 1; j <= 7; j++)
        {
            n = m % 10;
            m = m / 10;
            sum += pow(n, count);
            if (m == 0)
                break;
        }
        if (i == sum)
            printf("Narcissistic number is:%8d\n", i);
    } //ˮ�ɻ���Narcissistic number
    //��Ҷõ����Four leaf rose number
    //�������Pentagram number
    //������Liuhe number
    //��������Big Dipper number
    return 0;
}