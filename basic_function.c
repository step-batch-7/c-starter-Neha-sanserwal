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

float SI(int p, int r, int t){
  return (p*r*t)/100;
}

float CI(float p, float r, float t){
  return p*(pow(1+r/100,t))-p;
}

float to_fahrenheit(float temp_in_c){
  return ((9/5.0)*(temp_in_c))+32;
}

float to_celsius(float temp_in_f){
  return (5/9.0)*(temp_in_f-32);
}

int greatest_of_two(int num1,int num2){
  return (num1>num2)?num1:num2;
}

int greatest_of_three(int num1, int num2, int num3){
  int greater = greatest_of_two(num1,num2);
  return greatest_of_two(greater,num3);
}

float average_of_three(int num1,int num2,int num3){
  return (num1+num2+num3)/3.0;
}
int factorial(int num){
  int fact = 1;
  for(int i = 2; i<=num;i++){
    fact = fact*i;
  }
  return fact;
}

void fibonacci(int n){
  int first_num = 1;
  int second_num = -1;
  printf("The fibonacci series is :\n");
  while(n!=0){
    int sum = first_num+second_num;
    printf("%d\n",sum);
    second_num = first_num;
    first_num = sum;
    n--;
  }
}

int main(void){

  int num, num2;
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
  scanf("%d %d",&num, &num2);
  printf("GCD of %d and %d is : %d.\n",num,num2,GCD(num,num2));

  printf("\nEnter two number to find LCM: \n");
  scanf("%d %d",&num, &num2);
  printf("LCM of %d and %d is : %d.\n",num,num2,LCM(num,num2));

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

  int num3;
  printf("\nEnter three numbers to find greatest.\n");
  scanf("%d%d%d",&num,&num2,&num3);
  printf("Greatest is : %d.\n",greatest_of_three(num,num2,num3));

  printf("\nEnter three numbers to find average.\n");
  scanf("%d%d%d",&num,&num2,&num3);
  printf("Average is : %0.2f.\n",average_of_three(num,num2,num3));

  printf("\nEnter number to find factorial.\n");
  scanf("%d",&num);
  printf("factorial of %d is : %d.\n",num,factorial(num));

  printf("\nEnter number to print fibonacci series.\n");
  scanf("%d",&num);
  fibonacci(num);

  return 0;
}