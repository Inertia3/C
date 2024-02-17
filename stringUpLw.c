#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter a string:");
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
    if(s[i]>='a'&&s[i]<='z')
    {
        s[i]=s[i]-32;
    }
    }
    printf("UpperCase string is:%s\n",s);
    for(int j=0;s[j]!='\0';j++)
    {
        if(s[j]>='A'&&s[j]<='Z')
        {
            s[j]=s[j]+32;
        }
    }
     printf("LowerCase string is:%s\n",s);
}