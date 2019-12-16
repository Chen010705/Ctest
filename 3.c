#include<stdio.h>
int main()
{
    int i;
    for(i=17;i<=100;i++)
    if (i % 5 != 3 || i % 17 == 8)
    printf("%d ",i);

    return 0;
}