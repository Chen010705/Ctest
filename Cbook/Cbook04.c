#include <stdio.h>
int main(void)
{
    int celsius,fahr;

    fahr=100;

    celsius=5*(fahr-32)/9;

    printf("fahr=%d,celsius=%d\n",fahr,celsius);

    return 0;
}/*教材C语言程序设计P020*/