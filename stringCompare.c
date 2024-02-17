#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,flag;
    printf("Enter a string:");
    gets(s1);
    printf("Enter another string:");
    gets(s2);
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