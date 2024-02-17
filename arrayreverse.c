#include<stdio.h>
void main()    //Program to print element of arrays in forward order and in reverse order as well
{
    int n,i;
    printf("Enter the array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enters the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array are: ");   //Forward order 
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("Elements of array in reverse order are: ");   //Reverse order
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }

}