#include<stdio.h>
#include<math.h>
int main()
{
    int a,digit,sum=0;
    printf("Enter a number:");
    scanf("%d",&a);
    int z=a;
    while(a>0)
    {
        digit=a%10;
        sum=(sum+pow(digit,3));
        a=a/10;
    }
    if(sum==z)
    printf("%d",a);
}