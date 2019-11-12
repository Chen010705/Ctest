#include <stdio.h>
int main()
{
    int score, grade;
    printf("输入一个学生的成绩:");
    scanf("%d", &score);
    if (score < 0 || score > 100)
        printf("error");
    else
    {
        grade = score / 10;
        switch (grade)
        {
        case 6:
            printf("Poor");
            break;
        case 7:
            printf("Average");
            break;
        case 8:
            printf("Good");
            break;
        case 9:
        case 10:
            printf("Excellent");
            break;
        default:
            printf("Failing");
            break;
        }
    }
    return 0;
}