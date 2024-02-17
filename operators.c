#include<stdio.h>
int main()
{
    int a,b;
    a=2,b=5;
    int c=a+b;
    int c1=c+2;
    int c2=c;
    c2+=6;
    int c3=c2;
    c3-=5;
    int c4=6/5;
    int c5=2%5;
    int c6=-10%7;
    int c7=10%-7;
    int c8=c++;  /*this line is equivalent to c8=c; and then c= c+1;
                (that is first assign then increment)*/
    int c9=++c;  /*this line is equivalent to c=c+1;and then c9=c;
                (that is increment first and then assign)*/
    printf("c=%d\nc1=%d\nc2=%d\nc3=%d\nc4=%d\nc5=%d\nc6=%d\nc7=%d\nc8=%d\nc9=%d\n",c,c1,c2,c3,c4,c5,c6,c7,c8,c9);
    return 0;
}


