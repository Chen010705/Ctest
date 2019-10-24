/*4. 求出1000以内的水仙花数
说明：所谓"水仙花数"是指一3位数，其各位数字立方和等于该数本身。
例如：153是一个水仙花数，因为153=1+125+27。*/
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