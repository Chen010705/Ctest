/*��Ŀ���ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣������ǰ40���¼��ɣ�
������������ӵĹ���Ϊ����1,1,2,3,5,8,13,21....�����¸�������������֮�ͣ��ӵ������¿�ʼ��*/
#include <stdio.h>
int main()
{
    int f1 = 1, f2 = 1, i;
    for (i = 1; i <= 20; i++)
    {
        printf("%12d%12d", f1, f2);
        if (i % 2 == 0)
            printf("\n");
        f1 = f1 + f2;
        f2 = f1 + f2;
    }

    return 0;
} //�ʲ���������