#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*ptr,n,m;
    printf("Enter the block of memory to be allocated:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory alocation failed:");
    }
    else
    {
    printf("Enter the values to be stored at memory:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Values at memory:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    }
    printf("\nEnter the updated size of memory:");
    scanf("%d",&m);
    int *ptr1;
    ptr1=(int*)realloc(ptr,n*sizeof(int));
    if(ptr1==NULL)
    {
        printf("Memory reallocation failed:");
    }
    else
    {
    printf("Enter the values to be stored at memory:");
    for(int i=n;i<m;i++)
    {
       scanf("%d",(ptr1+i));
    }
    printf("Values at updated memory:\n");
    for(int i=0;i<m;i++)
    {
        printf("%d\t",*(ptr1+i));
    }
    }
    free(ptr1);
}