#include<stdio.h>
void main()
{
    int i,j;
    
    for(i=1,j=0;i<5,j<=6;i++);
    {
        printf("%d%d\n",i,j);//output = nothing and loop will run infinite times
        j++;
    }
    for(i=1,j=0;i<5,j<=6;j++);//output =17
    {
        printf("%d%d\n",i,j);
        i++;
    }
    for(i=1,j=0;i<5,j<=6;i++,j++);//output=87 and the loop body is considered as part of program not the part of for loop
    {
        printf("%d%d\n",i,j);
    }
    return 0;
}