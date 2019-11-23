#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MaxSize 50
struct student
{
    int num, class;
    char name[10];
    int computer, english, math;
    float average;
};
int Count = 0;
int main()
{
    struct student students[MaxSize];
    int i, num, choice;
    for (i = 1; i < 100; i++)
    {
        printf("choose your operation:\n[1]:new\n[2]:delect\n[3]:search\n[4]:modify\n[5]:input\n[6]:display\n[0]:exit\n");
        scanf("%d", &choice);
        if (choice == 0)
            break;
        switch (choice)
        {
        case 1:
            new_student(students);
            average(students);
            sort(students);
            output_student(students);
            break;
        case 2:
            delete_student(students);
            output_student(students);
            break;
        case 3:
            search_student(students, num);
            output_student(students);
            break;
        case 4:
            modify(students);
            search_student(students, num);
            average(students);
            sort(students);
            output_student(students);
            break;
        case 5:

            break;
        case 6:

            break;
        default:
            break;
        }
    }
    /*new_student(students);
    output_student(students);
    average(students);
    sort(students);
    output_student(students);
    modify(students);
    output_student(students);*/

    return 0;
}
extern Count;
void new_student(struct student students[])
{
    int i, n, t;
    if (Count == MaxSize)
    {
        printf("The array is full! \n");
        return;
    }
    printf("Input the Number of Students:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Input the studedt's name:");
        scanf("%s", students[i].name);
        printf("Input the student's num:");
        scanf("%d", &students[i].num);
        printf("Input the student's class:");
        scanf("%d", &students[i].class);
        printf("Input the student's math score:");
        scanf("%d", &students[i].math);
        printf("Input the student's english score:");
        scanf("%d", &students[i].english);
        printf("Input the student's computer score:");
        scanf("%d", &students[i].computer);
        Count++;
    }
}
extern Count;
void delete_student(struct student students[])
{
    int i, num, result;
    printf("Input the number of student to delete:");
    scanf("%d", &num);
    result = -1;
    for (i = 0; i < Count; ++i)
    {
        if (num == students[i].num)
        {
            result = i;
            break;
        }
    }
    if (result == -1)
    {
    }
    for (i = -1; i < Count - 1; ++i)
    {
        strcpy(students[i].name, students[i + 1].name);
        students[i].num = students[i + 1].num;
        students[i].class = students[i + 1].class;
        students[i].math = students[i + 1].math;
        students[i].english = students[i + 1].english;
        students[i].computer = students[i + 1].computer;
        students[i].average = students[i + 1].average;
    }
    printf("Not Found!\n");
}
extern Count;
void output_student(struct student students[])
{
    int i;
    if (Count == 0)
    {
        printf("Count of students is zero!\n");
        return;
    }
    printf("name    num   class  math  english computer  average\n");
    for (i = 0; i < Count; i++)
    {
        printf("%-8s", students[i].name);
        printf("%-8d", students[i].num);
        printf("%-8d", students[i].class);
        printf("%-8d", students[i].math);
        printf("%-8d", students[i].english);
        printf("%-8d", students[i].computer);
        students[i].average = (students[i].math + students[i].english + students[i].computer) / 3.0;
        printf("%-.2f", students[i].average);
        printf("\n");
    }
}
extern Count;
void average(struct student s[])
{
    int i;
    for (i = 0; i < Count; i++)
    {
        s[i].average = (s[i].math + s[i].english + s[i].computer) / 3.0;
    }
}
extern Count;
void sort(struct student s[])
{
    struct student temp;
    int i, index, j;
    for (i = 0; i < Count - 1; i++)
    {
        index = i;
        for (j = i + 1; j < Count; j++)
        {
            if (s[j].average > s[index].average)
            {
                index = j;
            }
        }
        temp = s[index];
        s[index] = s[i];
        s[i] = temp;
    }
}
extern Count;
void modify(struct student *p)
{
    int num, course, score, i;
    printf("Input the number of the students to be updated:");
    scanf("%d", &num);
    printf("Choice the course:1.math 2.english 3.computer:");
    scanf("%d", &course);
    printf("Input the new score:");
    scanf("%d", &score);
    for (i = 0; i < Count; i++, p++)
    {
        if (p->num == num)
            break;
    }
    if (i < Count)
        switch (course)
        {
        case 1:
            p->math = score;
            break;
        case 2:
            p->english = score;
            break;
        case 3:
            p->computer = score;
            break;
        }
}
extern Count;
void search_student(struct student students[], int num)
{
    struct student temp;
    int i, j, index, flag = 0;
    if (Count == 0)
    {
        printf("Count of students is zero!\n");
        return;
    }
    for (i = 0; i < Count; i++)
        if (students[i].num == num)
        {
            flag = 1;
            break;
        }
    if (flag)
    {
        printf("name:%s,", students[i].name);
        printf("num:%d,", students[i].num);
        printf("class:%d,", students[i].class);
        printf("math:%d,", students[i].math);
        printf("english:%d,", students[i].english);
        printf("computer:%d,", students[i].computer);
        printf("average:%.2f\n", students[i].average);
    }
    else
        printf("Not Found!");
}
/*void input(struct student students[])
{
    FILE *fp;
    long num;
    int i;

    if((fp=fopen("H:\IT\code\Ctest-2\practise\student\\students_information.txt")))
}*/