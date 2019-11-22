#include <stdio.h>
int main(void)
{
    int i, a;
    double PI, num, p1, p2;
    a = 1;
    PI = 0;
    p1 = 0;
    p2 = 0;
    for (i = 1; i < 100000000; i++)
    {
        num = 1.0 / a;
        if (a % 4 == 1)
        {
            p1 += num;
        }
        else
        {
            p2 += num;
        }
        a += 2;
    }
    PI = p1 - p2;
    PI *= 4;
    printf("%.12f", PI);

    return 0;
}