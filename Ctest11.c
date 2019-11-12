#include<stdio.h>
int main(void)
{
    int i,j,k,max;
    printf("Enter i,j,k:");
    scanf("%d,%d,%d",&i,&j,&k);
    if(i>j){
        if(i>k){
            max=i;
        }else{
            max=k;
        }
    }else{
        if(j>k){
            max=j;
        }else{
            max=k;
        }
    }
    printf("max=%d",max);

    return 0;
}