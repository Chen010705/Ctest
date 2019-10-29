#include <stdio.h>
int main(void)
{
    float celsius,fahr;
    printf("Enter fahr:");
    scanf("%f",&fahr);

    celsius=5*(fahr-32)/9;

    printf("fahr=%.1f,celsius=%.1f\n",fahr,celsius);

    return 0;
}