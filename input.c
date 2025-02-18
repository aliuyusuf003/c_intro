#include <stdio.h>

int main() {
  // Create an int and a char variable
  int principal;
  int rate;
  int time;
  // Ask the user to type a number AND a character
  printf("Type the principal, rate and interest press enter: \n");

  scanf("%d",&principal);
  scanf("%d",&rate);
  scanf("%d",&time);

  float interest =(float) principal * rate/100 * time;
  // printf("%d,%d,%d,%f",principal,rate,time,interest);
  printf("The total interest = %.2f",interest);
  return 0;
}
