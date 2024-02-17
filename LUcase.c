#include<stdio.h>
int main()
{
    char ch;
    int a;
    printf("Enter a Character,special character or the single digit number you want to check!\n");
    scanf("%c",&ch);
    a=ch;
    if(a>=65 && a<=90)
    {
        printf("Entered Character is-%c\n",ch);
        printf("And it is UPPERCASE\n");
    }
    else if(a>=97 && a<=122)
    {
        printf("Entered Character is-%c\n",ch);
        printf("And it is LOWERCASE\n");
    }
    else if(a>=48 && a<=57)
    {
        printf("Entered Character is-%c\n",ch);
        printf("And it is a SINGLE DIGIT\n");
    }
    else
    {
        printf("Entered Character is-%c\n",ch);
        printf("And it is SPECIAL CHARACTER\n");
    }
    printf("End of the program\n");
}