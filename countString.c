#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int lower,upper,undefined;
    lower=upper=undefined=0;
    printf("Enter nay text:");
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            upper=upper+1;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            lower=lower+1;
        }
        else
        {
           undefined=undefined+1; 
        }
    }
    printf("Numbers of uppercase characters are:%d\n",upper);
    printf("Numbers of lowercase characters are:%d\n",lower);
    printf("Numbers of undefined characters are:%d\n",undefined);
}