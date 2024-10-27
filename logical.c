#include <stdio.h>
int main ()
{

 int a=30,b=40;

  if (a>0 && b>0)
  printf("both values are greater than 0\n"); 
 else {
    printf("both values are less than 0\n");
  }
  if (a>15 || b>15)
  printf("any of them is greater than 0\n"); 
 else {
    printf("both values are less than 0\n");
  }
}