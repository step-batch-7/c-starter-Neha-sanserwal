#include <stdio.h>

int main(void){
  double num;
  printf("Enter a number to find square : ");
  scanf("%lf",&num);
  printf("The square of %0.2lf is %0.2lf.",num,num*num);
  return 0;
}