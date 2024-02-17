#include<stdio.h>
int main()
{
    int i,j,m,n,sum=0;
    printf("Enter the order of the matrix:\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the Matrix Elements:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Matrix ix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        printf("Sum of elements of Row %d is:%d",i+1,sum);
        printf("\n");
        sum=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=sum+a[j][i];
        }
        printf("Sum of elements of Column %d is:%d",i+1,sum);
        printf("\n");
        sum=0;
    }
}