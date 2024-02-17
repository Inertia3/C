#include<stdio.h>

char fun();

void main()
{
    char ch;
    ch=fun();
    printf("Ch=%c",ch);
}
char fun()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    return c;   //if we put c in single quotes it will returh ch =c
}