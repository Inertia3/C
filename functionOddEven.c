#include<stdio.h>

int evenodd(int);

int main()
{
    int a,ret;
    printf("Enter a number:");
    scanf("%d",&a);
    ret=evenodd(a);
    if(ret==1)
        printf("%d is Even",a);
    else
        printf("%d is Odd",a);
    
}
 int evenodd(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}