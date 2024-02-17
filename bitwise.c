#include <stdio.h>  
int main()  
{  
   int a=10,b=5,nota,notb,lefta,rightb;  
   printf("%d AND %d is:%d\n",a,b,a&b); 
   printf("%d OR %d is:%d\n",a,b,a|b);
   printf("%d XOR %d is:%d\n",a,b,a^b);
   nota=~a;
   notb=~b;
   printf("NOT of %d and %d is %d and is: %d\n",a,b,nota,notb);
   lefta=a<<2;
   rightb=b>>2;
   printf("Left shift of %d is:%d\n",a,lefta); 
   printf("Right shift of %d is:%d\n",b,rightb);
   return 0;  
}
