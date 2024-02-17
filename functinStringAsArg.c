#include<stdio.h>
#include<string.h>
void modify(char[],char[]);
void main()
{
    char str1[]="Sahil";
    char str2[]="ansari";
    modify(str1,str2);
}
void modify (char s1[],char s2[])
{
    int i=0,l1=0,l2=0;
    for(i=0;s1[i]!='\0';i++)
    {
        l1=l1+1;
    }
    for(i=0;s2[i]!='\0';i++)
    {
        l2=l2+1;
    }
    s2[0]='A';
    printf("Length of %s=%d\n",s1,l1);
    printf("Length of %s=%d\n",s2,l2);
    printf("Strings are %s and %s\n",s1,s2);
}