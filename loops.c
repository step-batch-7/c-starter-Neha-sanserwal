#include <stdio.h>

unsigned char is_even(num){
return num%2 == 0; 
}

int factorial(int num){
  int fact = 1;
  for(int i = 2; i<=num;i++){
    fact = fact*i;
  }
  return fact;
}

void fibonacci(int n){
  int first_num = 0;
  int second_num = 1;
  int sum = 0;
  printf("The fibonacci series is :\n");
  while(n!=0){
    printf("%d\n",first_num);
    sum = first_num+second_num;
    second_num = first_num;
    first_num = sum;
    n--;
  }
}

void odd_num_series(int n){
  for(int i = 1; i<=n; i++ ){
    if(!is_even(i)){
      printf("%d\n",i );
    }
  }
}


void even_num_series(int n){
  for(int i = 1; i<=n; i++ ){
    if(is_even(i)){
      printf("%d\n",i );
    }
  }
}

void multiplication_table(int n){
  for(int i = 1; i<=10; i++ ){
   printf("%d * %d = %d\n", n, i, n*i);
  }
}

void sum_of_n(int start, int end){
  int sum = 0;
  for(;start<=end;start++){
    sum += start;
  }
  printf("%d\n",sum);
}

void product_of_n(int start, int end){
  long long int product = 1;
  for(;start<=end;start++){
    product *= start;
  }
  printf("%lld\n",product);
}

void odd_num_between(int start, int end){
  for(int i = start; i<=end; i++ ){
    if(!is_even(i)){
      printf("%d\n",i );
    }
  }
}

void print_nth(int start, int end,int nth_num){
  for(; start <= end; start = start + nth_num){
    printf("%d\n",start);
  }
}

void sum_of_even(int start, int end){
  long int sum =0;
    for(; start <= end; start++){
      if(is_even(start)){
        sum = sum + start;
      }
    }
  printf("%ld\n",sum);

}

void odd_num_series_reverse(int n){
  for(int i = n; i>=1; i-- ){
    if(!is_even(i)){
      printf("%d\n",i );
    }
  }
}

int main(void){
  int num, num2;
  printf("\nEnter number to find factorial.\n");
  scanf("%d",&num);
  printf("factorial of %d is : %d.\n",num,factorial(num));

  printf("\nEnter number to print fibonacci series.\n");
  scanf("%d",&num);
  fibonacci(num);

  printf("\nEnter number to print odd number series.\n");
  scanf("%d",&num);
  odd_num_series(num);

  printf("\nEnter number to print even number series.\n");
  scanf("%d",&num);
  even_num_series(num);

  printf("\nEnter number to print it multiplication table.\n");
  scanf("%d",&num);
  multiplication_table(num);

  printf("\nEnter start and end numbers to print total sum.\n");
  scanf("%d%d",&num,&num2);
  sum_of_n(num,num2);

  printf("\nEnter start and end numbers to print total product.\n");
  scanf("%d%d",&num,&num2);
  product_of_n(num,num2);

  printf("\nEnter start and end numbers to print odd number series.\n");
  scanf("%d%d",&num,&num2);
  odd_num_between(num,num2);

  int nth_num;
  printf("\nEnter start and end numbers and nth number to print every nth number.\n");
  scanf("%d%d%d",&num,&num2,&nth_num);
  print_nth(num,num2,nth_num);

  printf("\nEnter start and end numbers to find sum of total even numbers in between.\n");
  scanf("%d%d",&num,&num2);
  sum_of_even(num,num2);


  printf("\nEnter a number to print odd numbers series backward.\n");
  scanf("%d%d",&num);
  odd_num_series_reverse(num);

  return 0;
}