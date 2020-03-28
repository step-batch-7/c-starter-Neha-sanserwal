#include <stdio.h>

unsigned char is_even(num){
  return num%2 == 0; 
}

int square(int num){
  return num*num;
}

int cube(int num){
  return num*num*num;
}

int GCD(int num1,int num2){
  while(num2 == 0){
    int rem = num1%num2;
    int quotient = num1/num2;
    num2 = rem;
    num1 = quotient;
  };
  return num1;
}

int HCF(int num1,int num2){
  return (num1*num2)/GCD(num1,num2);
}

int SI(int p, int r, int i){
  return (p*r*i)/100;
}

int main(void){

  int num, another_num;
  printf("Enter a number : ");
  scanf("%d",&num);

  if(is_even(num)){
    printf("%d is Even Number.\n",num);
  }else{
    printf("%d is Odd Number.\n",num);
  }

  printf("Square of %d is %d.\n",num, square(num));

  printf("Cube of %d is %d.\n",num, cube(num));

  printf("Enter two number to find GCD: \n");
  scanf("%d %d",&num, &another_num);
  printf("GCD of number is : %d.\n",GCD(num,another_num));

  printf("Enter two number to find HCF: \n");
  scanf("%d %d",&num, &another_num);
  printf("HCF of number is : %d.\n",HCF(num,another_num));

  int principal, rate, interest;
  printf("Enter principal, rate and interest to find SI.\n");
  scanf("%d %d %d",&principal, &rate, &interest);
  printf("SI of number is : %d.\n",SI(principal,rate,interest));
  return 0;
}