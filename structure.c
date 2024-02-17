#include<stdio.h>
struct personal
{
    char name[20];
    int day;
    char month[10];
    int year;
    float salary;
};
int main()
{
    struct personal s;
    printf("Enter the details of the pasanger:\n");
    printf("Enter name:");
    gets(s.name);
    printf("\n");
    printf("Enter journey's day:");
    scanf("%d",&s.day);
    printf("\n");
    printf("Enter month:");
    gets(s.month);
    printf("\n");
    printf("Enter year:");
    scanf("%d",&s.year);
    printf("\n");
    printf("Enter Salary:");
    scanf("%f",&s.salary);
    printf("\n");
    printf("The info of the pasanger is as follows:\n");
    printf("%s\n",s.name);
    printf("%d\n",s.day);
    printf("%s\n",s.month);
    printf("%d\n",s.year);
    printf("%f\n",s.salary);

}