/*����n���������Ƚ����ǵĴ�С������С�����˳�����������
Ҫ����������10������
416,763,947,951,439,297,600,981,788,624*/
#include <stdio.h>
#define N 10
int main(void)
{
    int a[N], i, j, index;
    printf("Input the 10 number:\n");
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);
    for (j = 0; j < N; j++)
        for (i = 0; i < N - j - 1; i++) //��һ��Ϊʲô��˫��forѭ��,Ϊʲôi<N-j-1������i<N
        {
            if (a[i + 1] < a[i])
            {
                index = a[i];
                a[i] = a[i + 1];
                a[i + 1] = index;
            }
        }
    for (i = 0; i < N; i++)
        printf("%d ", a[i]);

    return 0;
}