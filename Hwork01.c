#include<stdio.h>
int main(void)
{
    double radius,volume,PI;
    
    radius = 3;
    PI =3.141592;
    volume = 4/3*PI * radius*radius*radius;
    printf("Volume is %f!\n",volume);

    return 0;
}