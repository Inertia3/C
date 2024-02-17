#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number a:");
    scanf("%d",& a);
    printf("Enter the second numner b:");
    scanf("%d",& b);
    int sum =a+b;
    int sub =a-b;
    int mul =a*b;
    int divi =a/b;
    int mod =a%b;
    printf("Addition of %d and %d is:%d\n",a,b,sum);
    printf("Subtraction of %d and %d is:%d\n",a,b,sub);
    printf("Multiplication of %d and %d is:%d\n",a,b,mul);
    printf("Divison of %d and %d is:%d\n",a,b,divi);
    printf("Modulus of %d and %d is:%d\n",a,b,mod);
    return 0;

}


