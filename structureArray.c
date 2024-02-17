#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
void main()
{
    struct student s[2];
    printf("Enter the info of students:\n");
    for(int i=0;i<2;i++)
    {
        scanf("%d%s%f",&s[i].rollno,s[i].name,&s[i].marks);
    }
    for(int i=0;i<2;i++)
    {
        printf("Name=%s\nRoll No=%d\nMarks=%f\n",s[i].name,s[i].rollno,s[i].marks);
    }
}