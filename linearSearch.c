#include<stdio.h>      //Searching a element of a array as per user choice
int main()
{
    int a[5],n,found=0;
    printf("Enter the array elements:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
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
           printf("Element found at index:%d\n",k);
           found=1;
           break;
        }
    }
    if(found==0)
    {
        printf("Element not found");
    }
}
