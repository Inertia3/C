#include<stdio.h>
int main()
{
    int x,i,j,k,m,n,p,q,sum;
    printf("Enter 1 to evaluate addition of two matrix\n");
    printf("Enter 2 to evaluate subtraction of two matrix\n");
    printf("Enter 3 to evaluate multiplication of two matrix\n");
    printf("Enter 4 to evaluate transpose of two matrix\n");
    printf("Enter the order of first matrix:\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter the first's matrix elements:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("The first matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the order of second's matrix:\n");
    scanf("%d%d",&p,&q);
    int b[p][q];
    printf("Enter the second's matrix elements:");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     printf("The second's matrix is:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    int c[i][j];
    printf("Enter the operation you want to perform:");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        {
            if(m==p&&n==q)
            {
                printf("Sum of two matrix is:\n");
                for(int i=0;i<m;i++)
                {
                  for(int j=0;j<n;j++)
                  {
                   c[i][j]=a[i][j]+b[i][j];
                   printf("%d\t",c[i][j]);
                  }
                 printf("\n");
                }
            }
            else
            {
                printf("Matrix Addition not possible");
            }
            break;
        }
        case 2:
        {
            if(m==p&&n==q)
            {
                 printf("Difference of two matrix is:\n");
                 for(int i=0;i<m;i++)
                 {
                    for(int j=0;j<n;j++)
                     {
                     c[i][j]=a[i][j]-b[i][j];
                     printf("%d ",c[i][j]);
                     }
                 printf("\n");
                 }
            }
            else
            {
                 printf("Matrix Subtraction not possible");
            }
            break;
        }
        case 3:
        {
            if(n==p)
            {
                 for(i=0;i<m;i++)
                 {
                     for(j=0;j<q;j++)
                     {
                     sum=0;
                     for(k=0;k<m&&k<p;k++)
                     {
                          sum=sum+(a[i][k]*b[k][j]);
                          c[i][j]=sum;
                     }
                 }
                 }
                 printf("Multiplication of two matrix is:\n");
                 for(i=0; i<m; i++)
                 {
                     for(j=0; j<q; j++)
                     {
                         printf("%d ",c[i][j]);
                         printf("\n");
                     }
                 } 
             }
            else
            printf("Multiplication not possible");
        }
        break;
        case 4:
        {
            printf("The transpose of first Matrix is:\n");
            for(i=0;i<n;i++)
            {
                 for(j=0;j<m;j++)
                 {
                 printf("%d ",a[j][i]);
                 }
                 printf("\n");
            }
            printf("The transpose of second Matrix is:\n");
            for(i=0;i<q;i++)
            {
                 for(j=0;j<p;j++)
                 {
                 printf("%d ",b[j][i]);
                }
               printf("\n");
            }
        }
        break;
        default:
        {
            printf("Invalid input");
        }
    }
}