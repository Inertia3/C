#include<stdio.h>
int main()
{
    int sum=0,i=1;
    do
    {
        sum=sum+i;
        i++;
    } while (i<=100);
    printf("Sum=%d",sum);
}