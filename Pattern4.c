#include<stdio.h>
int main()
{
    int size=5,i,j,k;
    for(i=0;i<size;i++)
    {
    for(j=0;j<i;j++)
    {
        printf(" ");
    }
    for(k=4;k>j;k--)
    {
        printf("*");
    }
    printf("\n");
    }
}