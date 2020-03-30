#include <stdio.h>

int print_notes_count(count){
 if(count){
    printf("%d x Rs %d\n",count, domination);
  }
}


int breakdown_currency(currency, domination){
  int remaining = currency;
  int count = 0;
  while(remaining > domination){
    count += remaining/domination;
    remaining = remaining % domination;
  }
  print_notes_count(count,domination);
  return remaining;
}


int main(void){
  int currency;
  printf("Enter amount");
  scanf("%d",&currency);
  currency=breakdown_currency(currency, 2000);
  currency=breakdown_currency(currency, 500);
  currency=breakdown_currency(currency, 200);
  currency=breakdown_currency(currency, 100);
  currency=breakdown_currency(currency, 50);
  currency=breakdown_currency(currency, 10);
  currency=breakdown_currency(currency, 5);
  currency=breakdown_currency(currency, 1);
  return 0;
}