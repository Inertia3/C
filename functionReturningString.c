#include<stdio.h>
char* display();
void main()
{
    char* str;
    str=display();
    printf("%s\n",str);
    str[0]='A';
    printf("%s\n",str);
}
char* display()
{
    static char str[]="Sahil";
    return str;
}

