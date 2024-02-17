#include<stdio.h>
#pragma pack(1)
struct student
{
    char a;
    int b;
}s;
int main()
{
    printf("%d",sizeof(s));
}