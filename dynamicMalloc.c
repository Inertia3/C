#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
    printf("Enter the chunk of memory to be allocated:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory not allocated");
    }
    else
    {
        printf("enter values to be stored at memory location:");
        for(int i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
        printf("values at memory location are:");
        for(int i=0;i<n;i++)
        {
            printf("%d\t",*(ptr+i));
        }
    }
    free(ptr);
}