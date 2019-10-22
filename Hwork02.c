#include <stdio.h>
#include <math.h>
int main(void)
{
    float g, t, s, T;
    g = 10;
    scanf("%f", &t);
    T = pow(t, 2);
    s = 1 / 2.0 * g * T;
    printf("The vertical distance of falling is:%.2f", s);

    return 0;
}