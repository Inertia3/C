#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        if(n%a[i]==0)
        {
            sum=sum+1;
        }
    }
    if(sum==2)
    {
        printf("%d is a Prime number",n);
    }
    else
    {
        printf("%d is Not a Prime NUmber",n);
    }
}