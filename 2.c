#include <stdio.h>
#define N 10
int main()
{
    int score[N] = {67, 98, 75, 63, 82, 79, 81, 91, 66, 84};
    int num, n;
    printf("choose your operation:\n1.Total\n2.Max\n3.Min\n4.average\n5.sort\n0.end\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        Total(score, N);
        break;
    case 2:
        Max(score, N);
        break;
    case 3:
        Min(score, N);
        break;
    case 4:
        average(score, N);
        break;
    case 5:
        sort(score, N);
        break;
    case 0:
        break;
    default:
        break;
    }
    return 0;
}

void Total(int score[], int n)
{
    int i, sum;
    for (i = 0; i < N; i++)
        sum += score[i];
    printf("sum is :%d", sum);
}

void Max(int score[], int n)
{
    int i, max;
    max = 0;
    for (i = 0; i < N; i++)
        if (score[max] <= score[i])
            max = i;
    printf("max is :%d", score[max]);
}

void Min(int score[], int n)
{
    int i, min;
    min = 9;
    for (i = 0; i < N; i++)
        if (score[min] >= score[i])
            min = i;
    printf("min is :%d", score[min]);
}

void average(int score[], int n)
{
    int i, sum;
    float aver;
    for (i = 0; i < N; i++)
        sum += score[i];
    aver = sum / 1.0 / N;
    printf("aver is :%.1f", aver);
}

void sort(int score[], int n)
{
    int i, j, index;
    index = 0;
    for (j = 0; j < N; j++)
        for (i = 0; i < N - j - 1; i++)
            if (score[i] > score[i + 1])
            {
                index = score[i];
                score[i] = score[i + 1];
                score[i + 1] = index;
            }
    for (i = 0; i < N; i++)
        printf("%d ", score[i]);
}