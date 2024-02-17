#include<stdio.h>
int main()
{/*
    int i,j;
    for(i=4;i>=1;i--)
    {
      for(j=1;j<=i;j++)
      {
        printf("*");
      }
      printf("\n");
    }
}*/
int i=1,j;
while(i<=5)
{
  j=5;
  while(j>i)
  {
    printf("*");
    j--;
  }
  printf("\n");
  i++;
}
}