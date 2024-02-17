#include<stdio.h>

void swap(int,int);

void main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);
    printf("Unswapped Numbers are:x=%d and y=%d\n",x,y);
    swap(x,y);
    printf("x=%d and y=%d\n",x,y);    //Call by value
}
void swap(int x, int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("Swapped Numbers are:x=%d and y=%d\n",x,y);
}