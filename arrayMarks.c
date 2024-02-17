#include<stdio.h>
int main()
{
    int marks[5],i;
    float sum=0,avg;
    printf("Enter the marks of the students: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("Sum of marks of students are:%f\n",sum);
    printf("avg marks of students are:%f",avg);
}