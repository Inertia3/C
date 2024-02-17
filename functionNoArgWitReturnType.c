#include<stdio.h>

int sum();

int main(void)
{
    int s;
    s=sum();
    printf("sum=%d\n",s);
    printf("sum=%d",sum());
    
}
int sum()
{
    int a=5,b=7;
    return a+b;
}