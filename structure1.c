#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
}s={5,"Sahil",99.9};
void main()
{
struct student s1={6,"Talib",95};
struct student s2={8};
printf("%d\t%s\t%f\n",s.rollno,s.name,s.marks);
printf("%d\t%s\t%f\n",s1.rollno,s1.name,s1.marks);
printf("%d\t%s\t%f\n",s2.rollno,s2.name,s2.marks);
}