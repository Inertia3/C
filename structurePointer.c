#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
struct student s;
int main()
{
    struct student *ptr=&s;
    printf("Enter the info of students:\n");
    scanf("%d",&ptr->rollno);
    scanf("%s",ptr->name);
    scanf("%f",&ptr->marks);
    printf("Roll no=%d\nName=%s\nMarks=%.2f",ptr->rollno,(*ptr).name,ptr->marks);
}