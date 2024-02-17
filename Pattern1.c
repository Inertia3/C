#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
      for(j=1;j<=i;j++)
      {
        printf("*");
      }
      printf("\n");
    }
}/*
int i=1,j;
while(i<=4)
{
  j=1;
  while(j<=i)
  {
  printf("*");
  j++;
  }
  printf("\n");
  i++;
}
return 0;
}*/
