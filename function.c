#include<stdio.h>

void sum();   //function declaration
void main()
{
    sum();    // function calling
}   
void sum()   //function definition
{
    int a,b,sum=0;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}

/*void sum();   //function declaration     ??? compiler is in dilema whether to take vaues or not
void main()
{
    sum(5,7);   // function calling      ??? it will not give any errors but it will no return sum of arguments
}
void sum()   //function definition
{
    int a,b,sum=0;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}*/

/*void sum(void);   //function declaration     // now if we pass parmeters it will give error
void main()
{
    sum(5,7);   // function calling      ??? it will not give any errors but it will no return sum of arguments
}
void sum()   //function definition
{
    int a,b,sum=0;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}*/
