#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    *p=20;
    p=&a;
    printf("value of a=%d\n",*p);
    printf("Address of a is=%x\n",p);
    printf("value of a=%d\n",*p);
    printf("value of a=%x\n",p);
    int x[]={0,1,-1,10,11};
    int *m=&x[0];
    int *n=&x[4];
    int d=m-n;
    printf("%d\n",d);
    *n=25;
    printf("%d\n",*n);
    d=n-m;
    printf("%d\n",d);
    *m=27;
    printf("%d\n",*m);
    n=n-3;
    printf("%d\n",*n);
    m=m+3;
    printf("%d\n",*m);

   

}