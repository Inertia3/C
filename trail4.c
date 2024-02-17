#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=b=c=d=4;
    printf("a++=%d\n++b=%d\nc--=%d\n--d=%d\n",a++,++b,c--,--d);
    int e=8;
    printf("e++=%d\n",e++);
    printf("updated value of e=%d\n",e);
    printf("++e=%d\n",++e);
    printf("updated value of e=%d\n",e);
    printf("e--=%d\n",e--);
    printf("updated value of e=%d\n",e);
    printf("--e=%d\n",--e);
    printf("updated value of e=%d\n",e);
    return 0;
}

    
    