#include<stdio.h>
int main()
{
float distance;
printf("Enter the distance between two cities in KM:");
scanf("%f", & distance);
float m,f,i,c;
m=distance*1000;
f=distance*3280.84;
i=distance*39370.1;
c=distance*100000;
printf("The distance in meters is:%.1f\n",m);
printf("The distace in feets is:%.2f\n",f);
printf("The distance in inches is:%.3f\n",i);
printf("The distance in centimeters is:%.4f\n",c);
return 0;
}




