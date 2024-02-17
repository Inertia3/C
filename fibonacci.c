#include<stdio.h>
int main()
{
    int n,f,f1=-1,f2=1;
    printf("Enter the range of fibonacci series:");
    scanf("%d",&n);
    while(n>0)
    {
        f=f1+f2;
        printf("%d\t",f);
        f1=f2;
        f2=f;
        n--;

    }
}