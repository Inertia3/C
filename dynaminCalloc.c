#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n;
    printf("Enter the chunks of memory to be allocated:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
    printf("Memory not allocated:");
    }
    else
    {
        printf("Enter the v alues to be stored at mmory location:\n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
        printf("Values at memory allocation:\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\t",*(ptr+i));
        }
    }
    free(ptr);

}