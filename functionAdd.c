#include<stdio.h>

void sum(int,int);

void main()
{
    int x,y;
    /*printf("Enter two numbers");
    scanf("%d",&x,&y);*/
    sum(6,7);
}
void sum(int x, int y)
{
    int sum=0;
    sum=x+y;
    printf("sum=%d",sum);
}


