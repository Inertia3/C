#include<stdio.h>    //Program to print sum of two arrays
void main()
{
    int n,i;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr1[n],arr2[n],sumArr[n];
    printf("Enter the Elements of arr1:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the Elements of arr2:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        sumArr[i]=(arr1[i]+arr2[i]);
        printf("sumArr[%d]=%d\n",i,sumArr[i]);
    }
    
}