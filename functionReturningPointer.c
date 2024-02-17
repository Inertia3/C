#include<stdio.h>
int* returnPointer(int[]);

int main()
{
    int* b;
    int *d;
    int a[]={1,2,3,4,5};
   b=returnPointer(a);
    printf("%d\n",*b);
}
int* returnPointer(int a[])
{
    a=a+2;
    return a;    
}