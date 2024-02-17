#include<stdio.h>
int main()
{
    int i,j,m,n,p,q,k,sum=0;
    printf("Enter the order of the first matrix:\n");
    scanf("%d %d",&m,&n);
    printf("Enter the order of the second matrix:\n");
    scanf("%d %d",&p,&q);
    int a[m][n];
    int b[p][q];
    printf("Enter the first matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
   for(i=0;i<m;i++)
   {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the second matrix:");
     for(i=0;i<p;i++)
     {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }     
     for(i=0;i<p;i++)
     {
        for(j=0;j<q;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    if(n!=p)
    {
          printf("Multiplication Not possible");
    }
   
    else
    {
         int c[i][j];
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
            printf("%d ",c[i][j]);
        printf("\n");
    }
    }
      
}