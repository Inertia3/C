#include<stdio.h>
#include<conio.h>
/*/
int main()   //for loop
{
    int i,sum=0;
    for(i=101;i<200;i++)
   {
    if(i%5==0)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    getch();
   }
}
*/
/*
int main()   //do while loop
{
    int i=101,sum=0;
    do
    {
        if(i%5==0)
        {
            sum=sum+i;
        }
        i++;
    } 
    while (i<200);
    printf("Sum of integers > 100 & < 200 and divisible by 5 is %d",sum);
    getch();
}*/
int main()       //while loop
{
    int i=101,sum=0;
    while (i<200)
    {
        if(i%5==0)
        {
        sum=sum+i;
        }
        i++;
    }
    printf("%d",sum);
    getch();
}
