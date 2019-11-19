extern Count;
void new_student(struct student students[])
{
    int i, n;
    if (Count == MaxSize)
    {

        printf("The array is full! \n");
        return;
    }
    printf("Input the Number of Students:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Input the student's num:");
        scanf("%d", &students[i].num);
        printf("Input the studedt's name:");
        scanf("%s", students[i].name);
        printf("Input the student's math score:");
        scanf("%d", &students[i].math);
        printf("Input the student's english score:");
        scanf("%d", &students[i].english);
        printf("Input the student's computer score:");
        scanf("%d", &students[i].computer);
        Count++;
    }
}
void output_student(struct student students[])
{
    int i;
    if (Count == 0)
    {
        printf("Count of students is zero!\n");
        return;
    }
    printf("num\tname   math  english computer  average\n");
    for (i = 0; i < Count; i++)
    {
        printf("%-8d", students[i].num);
        printf("%-8s", students[i].name);
        printf("%-8d", students[i].math);
        printf("%-8d", students[i].english);
        printf("%-8d", students[i].computer);
        printf("%-.2f", students[i].average);
        printf("\n");
    }
}