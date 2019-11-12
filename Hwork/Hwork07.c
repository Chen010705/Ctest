#include<stdio.h>
int main(void)
{
    int choice,i;
    double price;

    for(i=1;i<=5;i++){
        printf("[1]Select apples\n");
        printf("[2]Select pears\n");
        printf("[3]Select oranges\n");
        printf("[4]Select grapes\n");
        printf("[0]Exit\n");

        printf("Enter choice:");
        scanf("%d",&choice);

        if(choice==0)
        break;
        switch(choice){
            case 1:price=3.0;break;
            case 2:price=2.5;break;
            case 3:price=4.1;break;
            case 4:price=10.2;break;
            default:price=0.0;break;
        }
        printf("price=%0.1fÔª/Ç§¿Ë\n",price);
    }
    printf("Thanks\n");
    return 0;
}