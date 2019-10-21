#include<stdio.h>
#include<stdio.h>
int main(void)
{
    int radius,r3;
    double PI,volume;
    
    scanf("%d",&radius);
    PI =3.141592;
    r3 =pow(radius,3);
    volume = 4/3*PI * r3;
    printf("Volume is %f!\n",volume);

    return 0;
}