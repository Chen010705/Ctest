#include<stdio.h>
int main(void)
{
    int i,flag,denominator;
    double PI;
    flag=1;
    denominator=1;
    PI=0;
    
    for(i=1;i<=100000000;i++)
    {
        PI =PI+ 1.0/denominator*flag;
        flag=-flag;
        denominator +=2;
    }
    PI=PI*4;
    printf("PI=%.12f",PI);

    return 0;
}