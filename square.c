#include<stdio.h>
#include<math.h>
int main()
{
    int a,x,root,square;
    //double root;
   // printf("Enter 1 for odd even\nEnter 2 for pos neg\nEnter 3 for square\nEnter 4 for square root\n");
    printf("Enter the operation you want to do:");
    scanf("%d",&x);
    printf("Enter a number:");
    scanf("%d",&a);
    root=sqrt(a);
    //square=a*a;
    square=pow(a,2);
    switch (x)
    {
        case 1:     // can input integer as well in case but in that case remove single quotes//
                      // can input character as well in case but in that case add single quotes//
        if(a>=0)
    {
        printf("%d is a Positive Number",a);
    }
    else
    {
        printf("%d is a Negative Number",a);
    }
        break;
        case 2:
        if(a%2==0)
    {
        printf("%d is a Even Number",a);
    }
    else
    {
        printf("%d is a Odd Number",a);
    }
        break;
        case 3:
        printf("Square of %d is:%d\n",square);
        break;
        case 4:
        printf("Square root of %d is:%d\n",a,root);
        break;
        default:
        printf("Invalid operations");
    }
}

