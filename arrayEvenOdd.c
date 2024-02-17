#include<stdio.h>    //Program to print no of even and odd elemets in a array
int main()
{
    int a[10],even=0,odd=1,i;
    printf("Enter any ten numbers of your choice:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
    if(a[i]%2==0)
    {
        printf("Even Element=%d\n",a[i]);
        even=even+1;
    }
    else
    {
        printf("Odd Element=%d\n",a[i]);
        odd=odd+1;
    }
    }
    printf("Total Numbers of Even elements are: %d\n",even);
    printf("Total Numbers of odd elements are: %d\n",odd);
}