#include <stdio.h>
#include <math.h>

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
  while(num2 != 0){
    int rem = num1%num2;
    num1 = num2;
    num2 = rem;
  };
  return num1;
}

int LCM(int num1,int num2){
  return (num1*num2)/GCD(num1,num2);
}

double SI(int p, int r, int t){
  return (p*r*t)/100;
}

double CI(float p, float r, float t){
  return p*(pow(1+r/100,t))-p;
}

double to_fahrenheit(double temp_in_c){
  return ((9/5.0)*(temp_in_c))+32;
}

double to_celsius(double temp_in_f){
  return (5/9.0)*(temp_in_f-32);
}

int main(void){

  int num, another_num;
  printf("Enter a number to find even or odd: ");
  scanf("%d",&num);

  if(is_even(num)){
    printf("%d is Even Number.\n",num);
  }else{
    printf("%d is Odd Number.\n",num);
  }

  printf("\nEnter a number to get square: ");
  scanf("%d",&num);
  printf("Square of %d is %d.\n",num, square(num));

  printf("\nEnter a number to get cube: ");
  scanf("%d",&num);
  printf("Cube of %d is %d.\n",num, cube(num));

  printf("\nEnter two numbers to find GCD: \n");
  scanf("%d %d",&num, &another_num);
  printf("GCD of %d and %d is : %d.\n",num,another_num,GCD(num,another_num));

  printf("\nEnter two number to find LCM: \n");
  scanf("%d %d",&num, &another_num);
  printf("LCM of %d and %d is : %d.\n",num,another_num,LCM(num,another_num));

  float principal, rate, time;
  printf("\nEnter principal, rate and interest to find SI.\n");
  scanf("%f %f %f",&principal, &rate, &time);
  printf("SI of number is : %0.2f.\n",SI(principal,rate,time));

  printf("\nEnter principal, rate and interest to find CI.\n");
  scanf("%f %f %f",&principal, &rate, &time);
  printf("CI of number is : %0.2f.\n",CI(principal,rate,time));

  float temp;
  printf("\nEnter temperature in celsius to convert in fahrenheit.\n");
  scanf("%f",&temp);
  printf("Temp in fahrenheit is : %0.2f.\n",to_fahrenheit(temp));

  printf("\nEnter temperature in fahrenheit to convert in celsius.\n");
  scanf("%f",&temp);
  printf("Temp in celsius is : %0.2f.\n",to_celsius(temp));
  return 0;
}