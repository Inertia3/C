#include<stdio.h>
#include<math.h>
int main()
{
    float a1,a2,b1,b2,distance;
    printf("\nEnter point a1:");
    scanf("%f",&a1);
     printf("\nEnter point a2:");
    scanf("%f",&a2);
     printf("\nEnter point b1:");
    scanf("%f",&b1);
     printf("\nEnter point b2:");
    scanf("%f",&b2);
    distance=sqrt(((a2-a1)*(a2-a1))+((b2-b1)*(b2-b1)));
    float circumference=2*3.14*distance;
    printf("The radius of the circle and circumference %f and %f is:",distance,circumference);
    return 0;
}