#include<stdio.h>
int main ()
{
    int a;
    int b;
    char operator;
    printf("Enter the operator using which you want to perform any operation:%c",operator);
    scanf("%c", &operator);
    printf("Enter first numbers:",a);
    scanf("%d",&a);
    printf("Enter second numbers:",b);
    scanf("%d",&b);
    switch(operator)
    {
        case '+':
        printf("%d+%d=%d",a,b,a+b);
        break;
        case '-':
        printf("%d-%d=%d",a,b,a-b);
        break;
        case '*':
        printf("%d*%d=%d",a,b,a*b);
        break;
        case '/':
        printf("%d/%d=%d",a,b,a/b);
        break;
        case '%':
        printf("%d%c%d=%d",a,operator,b,a%b);
        break;
        default:
        printf("Invalid Operations");
        }
        return 0;
}