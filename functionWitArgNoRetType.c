#include<stdio.h>

void sum(float,float);

void main()
{
    float a,b;
    printf("Enter a and b:");
    scanf("%f%f",&a,&b);
    sum(a,b);
}
void sum(float x,float y)
{
    float s;
    s=x+y;
    printf("Sum=%f",s);
}
