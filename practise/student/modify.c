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
void search_student(struct student students[], int num)
{
    int i, flag = 00;
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
        students[i].average = (students[i].math + students[i].english + students[i].computer) / 3.0;
        printf("average:%.2f\n", students[i].average);
    }
    else
        printf("Not Found!");
}