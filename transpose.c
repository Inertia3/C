#include<stdio.h>
int main()
{
    int i,j,m,n;
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
    printf("The transpose of Matrix is:\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[j][i]);//Also if we change the position of i and j then also transpose will be printed
        }
        printf("\n");
    }
}