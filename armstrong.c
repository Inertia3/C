#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,m,n,x,sum,digit;
    printf("Enter the first term m:");
    scanf("%d",&m);
    printf("Enter the second term n:");
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        x=i;
        sum=0;
        while(x!=0)
        {
        digit=x%10;
        sum=(sum+pow(digit,3));
        x=x/10;
        }
        if(sum==i)
        printf("Armstrong Numbers are:%d",i);
    }
    return 0;
}


