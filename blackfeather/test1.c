/*1. 平方数是指可以写成某个整数的平方的数。
要求：编程求所有4位数，这些数具有以下特点：这数本身是平方数，且其低2位和高2位所组成的2个	2位数也是平方数。
例如：四位数1681，1681自身为平方数1681=41*41；而1681的高两位16为4*4,是平方数，低两位81也是平方数，81=9*9；所以1681满足要求；*/

#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, hd, sd;
    for (i = 1000; i < 10000; i++)
    {
        hd = i / 100;
        sd = i % 100;
        if (sqrt(i) == (int)sqrt(i))
            if (sqrt(hd) == (int)sqrt(hd))
                if (sqrt(sd) == (int)sqrt(sd))
                    printf("square numbers is %d \n", i);
    }
    return 0;
}