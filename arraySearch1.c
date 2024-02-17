#include<stdio.h>
int main()
{
    int a[5],n,found=0;
    printf("Enter the array elements:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of the array are:\n");
    for(int j=0;j<5;j++)
    {
        printf("%d\n",a[j]);
    }
    printf("Enter the Element you want to serch:\n");
    scanf("%d",&n);
    for(int k=0;k<5;k++)
    {
        if(a[k]==n)
        {
            printf("Element found at index:%d",k);
            break;
        }
        else
        {
            continue;
        }
        printf("Element not found");
    }
}
