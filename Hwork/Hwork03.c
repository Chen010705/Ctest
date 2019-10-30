#include <stdio.h>
int main(void)
{
    int a, b, c, d, sum;
    double average;
    printf("输入四个整数：");
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    sum = a + b + c + d;
    average = sum / 4.0;
    printf("sum = %d,average = %.1f", sum, average);
    
    return 0;
}