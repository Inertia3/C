#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int factorial=1,term,range;
    float sum=0,end_result=1;
    printf("Enter the range:");
    scanf("%d",&range);
    printf("Enter the const term:");
    scanf("%d",&term);
    for(int i=1;i<range;i++)
    {
        factorial=factorial*i;
        sum=pow(term,i)/factorial;
        end_result=end_result+sum;
    }
    printf("The sum of the given series is:%.2f",end_result);
    getch();
}