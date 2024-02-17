#include<stdio.h>
int main()
{
    int x,fact=1;
    printf("Enter a number:");
    scanf("%d",&x);
    int n=x;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial of %d is:%d",x,fact);
}