#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    char ch;
    printf("Enter a string:");
    gets(s1);
    int i,j,len;
    len=strlen(s1);
   for(i=0;i<(len/2);i++)
    {
        ch=s1[i];
        s1[i]=s1[len-1-i];
        s1[len-1-i]=ch;
    }
    printf("Reversed string is:%s\n",s1);
    /*for(i=0,j=len-1;i<j;i++,j--)
    {
        ch=s1[i];
        s1[i]=s1[j];
        s1[j]=ch;
    }*/
    printf("Reversed string is:%s",s1);
}