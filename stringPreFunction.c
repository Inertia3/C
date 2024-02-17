#include<stdio.h>
#include<string.h>
int main()
{
    int b,c;
    char x;
    char s1[5],s2[7];
    printf("Enter a string\n");
    gets(s1);
    printf("Enter another string\n");
    gets(s2);
    printf("Enter 1 to evaluate string length.\n");
    printf("Enter 2 to perform Reversing a string.\n");
    printf("Enter 3 to perform string concatenation.\n");
    printf("Enter 4 to perform string upper case.\n");
    printf("Enter 5 to perform string lower case.\n");
    printf("Enter 6 to copy two strings.\n");
    printf("Enter 7 to compare two strings.\n");
    printf("\n");
    printf("Enter the operation you want to perform.\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        {
            b=strlen(s1);
            c=strlen(s2);
            printf("String Length is:%d and %d\n",b);
            printf("String Length is:%d and %d",b);
            break;
        }
        case 2:
        {
            printf("Reversed string is:%s\n",strrev(s1));
            printf("Reversed string is:%s\n",strrev(s2));
            break;
        }
        case 3:
        {
            printf("Concatinated string is:%s",strcat(s1,s2));
            break;
        }
        case 4:
        {
            printf("Upper Case string is:%s",strupr(s1));
            printf("Upper Case string is:%s",strupr(s2));
            break;
        }
        case 5:
        {
            printf("Lower case string is:%s\n",strlwr(s1));
            printf("Lower case string is:%s\n",strlwr(s2));
            break;
        }
        case 6:
        {
            printf("Copied String is:%s",strcpy(s2,s1));
            break;
        }
        case 7:
        {
            printf("compared Strings are is:%s",strcmp(s1,s2));
            break;
        }
        default:
        {
            printf("Invalid input");
        }
    }   
}