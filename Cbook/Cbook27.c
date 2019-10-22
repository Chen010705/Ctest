#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int count = 0, flag, mynumber, yournumber;
    srand(time(0));
    mynumber = rand() % 100 + 1;
    flag = 0;
    while (count < 7)
    {
        printf("Enter your number:");
        scanf("%d", &yournumber);
        count++;
        if (yournumber == mynumber)
        {
            printf("Lucky you!\n");
            flag = 1;
            break;
        }
        else if (yournumber > mynumber)
            printf("Too big\n");
        else
            printf("Too small\n");
    }
    if (flag == 0)
        printf("Game over!\n");

    return 0;
} /*P76*/