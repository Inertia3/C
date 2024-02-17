#include<stdio.h>

int avgMarks(int[],int);

int main()
{
    int n;
    printf("Enter the no of subjects:");
    scanf("%d",&n);
    int marks[n];
    printf("Enter the marks obtained in each subject:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    int average=avgMarks(marks,n);
    printf("Average marks=%d",average);
}
int avgMarks(int marks[],int n)
{
  int avg=0,sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+marks[i];
  }  
  avg=sum/n;
  return avg;
}
