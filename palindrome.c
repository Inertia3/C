#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int x=n;
    while(x>0)
    {
        i=x%10;
        sum=(sum*10)+i;
        x=x/10;
    }
    if(sum==n)
    printf("%d is a palindrome number ",n);
    else
    printf("%d is not a palindrome number ",n);
}