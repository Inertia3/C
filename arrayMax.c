#include<stdio.h>   //Maximum of the entered array elements 
int main()
{
    int i,n,index,max;
    printf("Enter the array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");                                        
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0],index=0; 
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            index=i;
        }
    }
    printf("Largest element:%d\n",max);
    printf("Index of the largest element is:%d\n",index);
}