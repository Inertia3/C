#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,b,c,len,len1,len2,flag=0,count=0;
    char x;
    char s1[5],s2[7];
    printf("Enter a string\n");
    gets(s1);
    printf("Enter another string\n");
    gets(s2);
    printf("Enter 1 to evaluate string length.\n");
    printf("Enter 2 to perform string concatenation.\n");
    printf("Enter 3 to perform Reversing a string.\n");
    printf("Enter 4 to check a string is palindrome or not.\n");
    printf("Enter 5 to compare two strings.\n");
    printf("\n");
    printf("Enter the operation you want to perform.\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        {
     while(s1[i]!='\0')
    {
        count=count+1;
        i++;
    }
    printf("Length of string (%s) is:%d\n",s1,count);
        }
        break;
        case 2:
        {
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0;i<=len2;i++)
    {
        s1[len1+i]=s2[i];
    }
    printf("Concatinated string is:%s",s1);
        }
        break;
        case 3:
        {
    len=strlen(s1);
   for(i=0;i<(len/2);i++)
    {
        char ch=s1[i];
        s1[i]=s1[len-1-i];
        s1[len-1-i]=ch;
    }
    printf("Reversed string is:%s\n",s1);
        }
        break;
        case 4:
        {
    l=strlen(s1);
    for(i=0;i<(l/2);i++)
    {
        if(s1[i]==s1[l-1-i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("%s is palindrome",s1);
    }
    else
    {
        printf("%s is not palindrome",s1);
    }
        }
        break;
        case 5:
        {
            for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
        {
            if(s1[i]>s2[i])
            {
                flag=1;
                break;
            }
            else if(s1[i]<s2[i])
            {
                flag=-1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==0)
        {
            printf("strings are equal\n");
            printf("%d",flag);
        }
        else
        {
            printf("Strings are not equal\n");
            printf("%d",flag);
        }
    }  
        }
}