#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter a string:");
    gets(s);
    int i,l,flag;
    l=strlen(s);
    for(i=0;i<(l/2);i++)
    {
        if(s[i]==s[l-1-i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("%s is palindrome",s);
    }
    else
    {
        printf("%s is not palindrome",s);
    }
}