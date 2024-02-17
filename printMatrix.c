#include<stdio.h>
int main()
{
    int i,j,sum=0,m,n;
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
    printf("The Matrix is:\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("Sum of elements of Matrix is:%d",sum);
}