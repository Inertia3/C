#include<stdio.h>
#include<math.h>
int main()
{
    int a,x,root,square;
    printf("Enter the Operation you want to perform:");
    scanf("%d",&x);
    printf("Enter a number:");
    scanf("%d",&a);
    root=sqrt(a);
    square=pow(a,2);
    switch(x)
    {
    case 1:
    {
    printf("Square rooot of the number is:%d",root);
    break;
    }
    case 2:
    {
    printf("Square of the number is:%d",square);
    break;
    }
    case 3:
    {
        if(a%2==0)
        {
        printf("Even Number");
        }
        break;
    }
    }
}