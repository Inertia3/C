#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the operation you want to do:");
    scanf("%c",&ch);
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int b;
    printf("Enter another number:");
    scanf("%d",&b);
    switch (ch)
    {
        case '+':
        printf("Addition of %d and %d is:%d\n",a,b,a+b);
        break;
        case '-':
        printf("Substraction of %d and %d is:%d\n",a,b,a-b);
        break;
        case '*':
        printf("Multiplication of %d and %d is:%d\n",a,b,a*b);
        break;
        case '/':
        printf("Divison of %d and %d is:%d\n",a,b,a/b);
        break;
        case '%':
        printf("Modulus of %d and %d is:%d\n",a,b,a%b);
        break;
        default:
        printf("Invalid operations");
    }
}

    
