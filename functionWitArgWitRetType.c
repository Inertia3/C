#include<stdio.h>
float sum(float,float);

float main()
{
    float a,b,c;
    printf("Enter a:\n");
    scanf("%f",&a);
    printf("Enter b:\n");
    scanf("%f",&b);
    c=sum(a,b);
    printf("Sum=%f",c);
}
float sum(float x,float y)
{
    return x+y;
}