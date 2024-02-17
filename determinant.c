#include<stdio.h>
int main()
{
    int i,j,a[3][3],c1,c2,c3,det;
    printf("Enter the element of the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    c1=(a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2])));
    c2=(a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2])));
    c3=(a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1])));
    det=c1-c2+c3;
    printf("The determinent of the Matrix is:%d",det);
}