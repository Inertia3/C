#include<stdio.h>
int main()
{
    int i,f,l,m,n,k;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements in sorted manner:");
       for(int i=0;i<n;i++)
       {
        scanf("%d",&a[i]);
       }
       printf("Enter the element you want to search:");
       scanf("%d",&k);
       f=0;
       l=n-1;
       m=(f+l)/2;
       while(f<l)
       {
        if(a[m]==k)
        {
            printf("%d is found at index:%d",k,m);
            break;
        }
        else if(a[m]<n)
        {
            f=m+1;
            l=n-1;
            m=(f+l)/2;
        }
        else if(a[m]>n)
        {
            f=0;
            l=m-1;
            m=(f+l)/2;
        }
        else
        {
            printf("Element not present");
        }
       }
}