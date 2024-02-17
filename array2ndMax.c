#include<stdio.h>   //Maximum of the entered array elements 
int main()
{
    int i,n,index,max,smax;
    printf("Enter the array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:\n");                                        
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0]; 
    smax=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
        {
            if(a[i]<max&&a[i]>=a[i])
            {
                smax=a[i];
            }
        }
    printf("Largest element:%d\n",max);
    printf("Second Largest element:%d\n",smax);
}
