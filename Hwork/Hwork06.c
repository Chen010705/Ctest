#include <stdio.h>
int main(void)
{
    int n, i, A, B, C, D, E, error;
    A = B = C = D = E = error = 0;
    int a[100];
    printf("输入学生个数n:");
    scanf("%d", &n);
    printf("输入n个学生的成绩（0~100分）");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < 0 || a[i] > 100)
            error++;
        else if (90 <= a[i] && a[i] <= 100)
            A++;
        else if (80 <= a[i] && a[i] < 90)
            B++;
        else if (70 <= a[i] && a[i] < 80)
            C++;
        else if (60 <= a[i] && a[i] < 70)
            D++;
        else if (a[i] < 60)
            E++;
    }
    printf("error=%d,A=%d,B=%d,C=%d,D=%d,E=%d", error, A, B, C, D, E);
    return 0;
}