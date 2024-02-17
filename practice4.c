#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,n,factorial=1,sum=0,endresult=1;
    printf("Enter the constant term");
    scanf("%d",&x);
    printf("Enter the range");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        factorial=factorial*i;
        sum=sum+(pow(x,i)/factorial);
        endresult=endresult+sum;
    }
    printf("Sum of the series is:%d",endresult);
    
}