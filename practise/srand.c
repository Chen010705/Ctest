#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define number 30
int main()
{
    int i, j, k;
    int a[30];
    int map[number];
    for (i = 0; i < number; i++)
    {
        map[i] = -1;
    }
    j = 0;
    srand(time(NULL));
    while (j < 30)
    {
        k = rand() % 30;
        if (map[k] != -1)
            continue;
        map[k] = k;
        a[j] = k;
        j = j + 1;
    }
        static char a [30];
         a [1]='����',a [2]="��԰��",a [3]="������",a [4]="֣ʤ��",a [5]="���﷫";
         a [6]="����",a [7]="������",a [8]="֣�Ӻ�",a [9]="���岩",a [10]="������";
         a [11]="����ԭ",a [12]="����Զ",a [13]="����",a [14]="̷��",a [15]="��˧";
         a [16]="��贫h",a [17]="���ֿ�",a [18]="��Ф��",a [19]="���ݺ�",a [20]="������";
         a [21]="�ν�ƻ",a [22]="֣����",a [23]="Ƚ���",a [24]="��־��",a [25]="�����";
         a [26]="����",a [27]="���ʺ�",a [28]="Ҷ����",a [29]="����",a [30]="κ�׿�";
    for (i = 0; i < 30; i++)
    {
        if (i % 10 == 0)
        {
            printf("\n");
        }
        printf("%s ", a[i]);
    }
    return 0;
}