#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    max=(a>b?(a>c?a:c):(b>c?b:c));
    printf("Maximum of three numbers is:%d",max);
    return 0;
}