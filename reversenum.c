#include <stdio.h>
int main(){
  int num = 12345; // 54321

  int reversed =0;

  while(num){
    reversed = reversed * 10+  num%10;
    num /= 10;
  }
  printf("The reversed no: \n");
  printf("%d",reversed);
}