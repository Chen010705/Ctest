/*输入n个整数，比较他们的大小并按从小到大的顺序依次输出。
要求：输入以下10个整数
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
        for (i = 0; i < N - j - 1; i++) //想一想为什么用双层for循环,为什么i<N-j-1而不是i<N
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