#include<stdio.h>
long int fact(int);
int main()
{
    int n,x;
    printf("Enter the number:");
    scanf("%d",&n);
    x=fact(n);
    printf("Factorial of the number is:%d",x);
}
long int fact(int a)
{
    if(a>1)
    {
        return (a*fact(a-1));
    }
    else
    {
        return 1;
    }
}