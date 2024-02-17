#include<stdio.h>
int main()
{
    int a,i;
    int u=0;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            u++;
        }
    }
    if(u==1)
    {
        printf("%d is Prime Number",a);
    }
    else
    {
        printf("%d is Not a Prime Number",a);
    }
}