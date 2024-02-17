#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>25 && age<30)
    {
    printf("Your age is:%d\n",age);
    printf("You can go coffee with me\n");
    }
    else 
    {   
    printf("Your age is:%d\n",age);
    printf("Its time to go home\n");
    }
    printf("Out of if else block");
    getch();
}