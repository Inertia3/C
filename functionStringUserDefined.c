#include<stdio.h>
int main()
{
    int x;
    printf("Enter the operation:");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
    {
int StrLength(char[]);

int main()
{
    char s1[100];
    printf("Enter a string:");
    gets(s1);
    int length=StrLength(s1);
    printf("Length=%d",length);
}
int StrLength(char s1[])
{
    int count=0;
    for(int i=0;s1[i]!='\0';i++)
    {
       count++;
    }
    return count;
}
    }
    case 2:
    {
int strConcat(char [],char[]);

int main()
{
    char s1[100],s2[100];
    printf("Enter a string:");
    gets(s1);
    printf("Enter another string:");
    gets(s2);
    char str[100]=strConcat(s1,s2);
    puts(str);

}
int strConcat(char s1[],char s2[])
{
    int l1=strLength(s1);
    int l2=strLength(s2);
    for(int i=0;i<l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    return s1;
}
    }
    }

}
