#include<stdio.h>
int main()
{
    int i,j,k;
    {
        for(i=5;i>0;i--)
        {
            for(j=5;j>i;j--)
            {
                printf("  ");//space here
            }
            for(k=i;k<=i&k>0;k--)
            {
                printf("%d ",k);//space here
            }
            printf("\n");
        }
        return 0;
    }
}
