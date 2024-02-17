#include<stdio.h>

int armStrong(int);

int main()
{
    int n,arm;
    printf("Enter the number you want to check:");
    scanf("%d",&n);
    arm=armStrong(n);
    if(arm==n)
    printf("%d is a armstrong number",n);
    else
    printf("%d is not a armstrong number",n);    
}
int armStrong(int n)
{
    static int sum=0;
     while(n!=0)
    {
        int dig;
        dig=n%10;
        n=n/10;
        sum=sum+(dig*dig*dig);
    }
    return sum;
}