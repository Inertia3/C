#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,D,root1,root2;
    D=(b*b)-(4*a*c);
    printf("Enter coefficient of x^2:");
    scanf("%lf",&a);
    printf("Enter the coefficient of x:");
    scanf("%lf",&b);
    printf("Enter the constant term:");
    scanf("%lf",&c);
    if(D>0)
    {
        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2*a);
        printf("roots are real\n");
        printf("roots of the equation are:%lf\t%lf",root1,root2);
    }
    else if(D==0)
    {
        root1=-b/(2*a);
        root2=b/(2*a);
        printf("roots are real and equal\n");
        printf("roots of the equation are:%lf\t%lf",root1,root2);
    }
    else
    {
        double real=-b/(2*a);
        double imaginary=sqrt(-D)/(2*a);
        printf("roots are not real\n");
        printf("roots of the equation are:%lf %lf",real-imaginary,real+imaginary);
    }
    return 0;
}