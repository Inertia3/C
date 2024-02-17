#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    printf("Enter a string:");
    gets(s1);
    printf("Length of string (%s) is:%d\n",s1,strlen(s1));
    int i=0,count=0;
    char s2[100];
    printf("Enter another string:");
    gets(s2);
    while(s2[i]!='\0')
    {
        count=count+1;
        i++;
    }
    printf("Length of string (%s) is:%d\n",s2,count);
}