#include<stdio.h>
int main()
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
        printf("Matrix are not equal");
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
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            if(a[i][j]==b[i][j])
            {
              termi=1;  
            }
            else
            {
                termi=0;
                break;
            }   
        }
    }
    if(termi==1)
    {
    printf("The Matrices are equal");
    }
    else
    {
        printf("The Matrices are not equal");
    }
    }
}