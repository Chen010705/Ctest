#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MaxSize 50
struct student
{
    int class, num, score;
    char name[100];
    struct student *next;
};
struct student *Create_student();
struct student *Insert(struct student *head, struct student *stud);
struct student *Delete(struct student *head, int num);
void Print_student(struct student *head);

int main(void)
{
    struct student *head, *p;
    int choice, class, num, score;
    char name[100];
    int size = sizeof(struct student);

    do
    {
        printf("choose your operation:\n[1]:create\n[2]:insert\n[3]:delete\n[4]:print\n[5]:search\n[6]:modify\n[0]:exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = Create_student();
            break;
        case 2:
            printf("Input name,class,num and score:");
            scanf("%s,%d,%d,%d", &name, &class, &num, &score);
            p = (struct student *)malloc(size);
            strcpy(p->name, name);
            p->class = class;
            p->num = num;
            p->score = score;
            head = Insert(head, p);
            break;
        case 3:
        printf("Input num:\n");
        scanf("%d",&num);
        head=Delete(head,num);
        break;
        case 4:
        Print_student(head);
        break;
        case 5:
        break;
        case 6:
        break;
        case 0:
        break;
        }
    }while(choice!=0);

    return 0;
}
struct student*Create_Student()
{
    struct student*head,*p;
    int num,socre;
    char name[100];
    int size=sizeof(struct student);

    head=NULL;
    printf("Input num,name")
}