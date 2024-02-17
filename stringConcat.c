#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter a string:");
    gets(s1);
    printf("Enter another string:");
    gets(s2);
    int i,len1,len2;
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0;i<=len2;i++)
    {
        s1[len1+i]=s2[i];
    }
    printf("Concatinated string is:%s",s1);
}