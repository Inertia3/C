#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,D,x,y,root1,root2;
    printf("Enter the coefficient of x^2:");
    scanf("%lf",&a);
    printf("Enter the coefficient of x:");
    scanf("%lf",&b);
    printf("Enter the constant term:");
    scanf("%lf",&c);
    D=(b*b)-(4*a*c);
    x=(-b+sqrt(D))/(2*a);
    y=(-b-sqrt(D))/(2*a);
    if(D>0)
    {
        printf("Roots are real and distinct \n Roots are %lf and %lf",x,y);
    }
    else if (D==0)
    {
        printf("Roots are real and equal\nRoots are %lf and %lf",x,y);
    }
    else
    {
        printf("Roots are imaginary\nRoots are %lf and %lf",x,y);
    }
    
}