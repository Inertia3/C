#include <stdio.h>
int main() 
{
  // set size
  // or take user input
  int size = 4;

  for (int i = 0; i < size; i++) 
  {
    // printing spaces before stars
    for (int j = 1; j < size-i; j++) 
    {
      printf(" ");
    }
    // printing stars
    for (int k = 0; k <= i; k++) 
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}