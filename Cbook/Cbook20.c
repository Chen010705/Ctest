#include<stdio.h>
int main(void)
{
    double value1,value2;
    char op;

    printf("Type in an expression:");
    scanf("%lf%c%lf",&value1,&op,&value2);
    switch(op){
        case '+':
        printf("=%.2f\n",value1+value2);
        break;
        case '-':
        printf("=%.2f\n",value1-value2);
        break;
        case '*':
        printf("=%.2f\n",value1*value2);
        break;
        case '/':
        printf("=%.2f\n",value1/value2);
        break;
        default:
        printf("Unknown operator\n");
    }
    return 0;
}/*P58*/