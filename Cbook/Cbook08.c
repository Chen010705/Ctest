#include<stdio.h>
int main(void)
{
    int i,n,sum;

    printf("Enter n:");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of numbers form 1 to %d is %d\n",n,sum);

    return 0;
}