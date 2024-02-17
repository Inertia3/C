#include<stdio.h>

void fun(int,int);
void main()
{
    printf("Call By Value\n");
    int x=5,y=7;
    fun(x,y);
    printf("Inside main(function calling)\n");
    printf("x=%d, y=%d\n",x,y);
}
void fun(int x, int y)
{
    x=7;
    y=5;
    printf("Inside fun(called function)\n");
    printf("x=%d, y=%d\n",x,y);
}/*
void funn(int*,int*);
void main()
{
    printf("Call By Reference\n");
    int a=5,b=7;
    funn(&a,&b);
    printf("Inside main(function calling)\n");
    printf("a=%d, b=%d\n",a,b);
}
void funn(int *a,int *b)
{
    *a=7;
    *b=5;
    printf("Inside fun(called function)\n");
    printf("a=%d, b=%d\n",*a,*b);
}*/
