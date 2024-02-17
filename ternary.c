#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your first numbers a:");
    scanf("%d", & a);
    printf("Enter your second numbers b:");
    scanf("%d", & b);
    printf("Enter your third numbers c:");
    scanf("%d", & c);
    int greatest=(a>b?(a>c?a:c):(b>c?b:c)); 
    printf("The greatest among three numbers %d,%d and %d is:%d\n",a,b,c,greatest);
    return 0;
}