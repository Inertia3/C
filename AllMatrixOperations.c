#include<stdio.h>
int main()
{
    int x;
    printf("Enter 1 to evaluate addition of two matrix\n");
    printf("Enter 2 to evaluate subtraction of two matrix\n");
    printf("Enter 3 to evaluate multiplication of two matrix\n");
    printf("Enter 4 to evaluate transpose of two matrix\n");
    printf("Enter 5 to evaluate equality of two matrix\n");
    printf("\n");
    printf("Enter the operation ypu want to perform: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        {
          int i,j,m,n,p,q,termi;
    printf("Enter the order of the first matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the order of the second matrix:\n");
    scanf("%d%d",&p,&q);
    int a[m][n],b[p][q];
    if(m!=p||n!=q)
    {
        printf("Order of the matrices is not same\n");
        printf("Matrices cannot be added\n");
    }
    else
    {
    printf("Enter the first matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix:");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
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
    printf("The second matrix is:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("The sum of two matrices is:\n");
    {
        for(i=0;i<m;i++)
        {
             for(j=0;j<q;j++)
        {
             printf("%d\t",a[i][j]+b[i][j]);
        }
             printf("\n");
        }
    }
}   
        }
        case 2:
        {
              int i,j,m,n,p,q,termi;
    printf("Enter the order of the first matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the order of the second matrix:\n");
    scanf("%d%d",&p,&q);
    int a[m][n],b[p][q];
    if(m!=p||n!=q)
    {
        printf("Order of the matrices is not same\n");
        printf("Matrices cannot be subtracted\n");
    }
    else
    {
    printf("Enter the first matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix:");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
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
    printf("The second matrix is:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("The difference of two matrices is:\n");
    {
        for(i=0;i<m;i++)
        {
             for(j=0;j<q;j++)
        {
             printf("%d\t",a[i][j]-b[i][j]);
        }
             printf("\n");
        }
    }
}     
        }
        case 3:
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
        case 4:
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
    }


}