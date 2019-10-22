#include <stdio.h>
#include <math.h>
int main(void)
{
    float g, t, s, T;
    g = 10;
    printf("time is:");
    scanf("%f", &t);
    T = pow(t, 2);
    if (T <= 20){
        s = 1 / 2.0 * g * T;
    }
    else{
        s = 100;
    }
    printf("The vertical distance of falling is:%.2f", s);

    return 0;
}