#include<stdio.h>
#include<math.h>
int main()
{
    float d,a,b,c,root1,root2;
    printf("Enter the Coefficients of a:");
    scanf("%f",&a);
    printf("Enter the Coefficients of b:");
    scanf("%f",&b);
    printf("Enter the Constant term of c:");
    scanf("%f",&c);
    d=((b*b)-(4*a*c));
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("Roots are real and distinct\n");
        printf("Roots are %f and %f\n",root1,root2);
    }
    else if(d==0)
    {
        root1=-b/(2*a);
        root2=-b/(2*a);
        printf("Roots are real and equal\n");
        printf("Roots are %f and %f\n",root1,root2);
    }
    else
    {
        float real=-b/(2*a);
        float imaginary=sqrt(-d)/(2*a);
        printf("Roots are not real\n");
        root1=real+imaginary;
        root2=real-imaginary;
        printf("Roots are %f and %f\n",root1,root2);
    }
}
