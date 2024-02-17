#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5;
    printf("Enter the marks obtained in Mathematics:");
    scanf("%f",&m1);
    printf("Enter the marks obtained in Science:");
    scanf("%f",&m2);
    printf("Enter the marks obtained in History:");
    scanf("%f",&m3);
    printf("Enter the marks obtained in English:");
    scanf("%f",&m4);
    printf("Enter the marks obtained in Hindi:");
    scanf("%f",&m5);
    float obtainedmarks = (m1+m2+m3+m4+m5);
    float per = ((obtainedmarks/500)*100);
    printf("obtained marks:%f\n",obtainedmarks);
    printf("Percentage=%f\n",per);
    if (per>=60)
    {
    printf("first dividon");
    }
    else if(per<60 &&per>=50)
    {
    printf("Second dividon");
    }
    else if(per<50&&per>=40)
    {
    printf("third dividon");
    }
    else
    {
    printf("Failed");
    }
    return 0;
}