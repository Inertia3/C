#include<stdio.h>
union student
{
    int a;
    char b;
    float c;
};
int main()
{
union student s;
union student *ptr=&s;
s.a=1;
s.b='a';
s.c=9;
printf("Roll no=%d\nName=%c\nMarks=%f",ptr->a,ptr->b,(*ptr).c);
}