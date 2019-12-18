/*题目：打印出所有的三位-七位"水仙花数"（100-9999999），所谓"水仙花数"是指一个n位数，其各位数字n次方和等于该数本身*/
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
    } //水仙花数Narcissistic number
    //四叶玫瑰数Four leaf rose number
    //五角星数Pentagram number
    //六合数Liuhe number
    //北斗七星Big Dipper number
    return 0;
}