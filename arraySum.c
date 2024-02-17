#include<stdio.h>   //Maximum of the entered array elements 
int main()
{
    int i,n,sum=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");                                        
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
}

    
    