#include<stdio.h>
int main()
{
    int n,i,s,t;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(t=0;t<n-1;t++)
    {

    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            s=a[i];
            a[i]=a[i+1];
            a[i+1]=s;
        }
    }
    }
    printf("Array in ascending order is:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}