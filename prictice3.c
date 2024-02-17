#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,digit,n,m,sum=0;
    printf("Enter the starting term:");
    scanf("%d",&m);
    printf("Enter the ending term:");
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        j=i;
        sum=0;
        while(j!=0)
        {
        digit=j%10;
        sum=(sum+pow(digit,3));
        j=j/10;
        }
        if(sum==i)
        {
            printf("Armstrong numbers are:%d",sum);
        }
    }
}