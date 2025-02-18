#include <stdio.h>

int main(){
  int timesvalue = 500;
  int count = 10;

  for (int i = 1; i < count; i++)
  {
    /* code */
    printf("%d * %d =%d\n",timesvalue,i,timesvalue * i);
  }
  // 2*1 = 2
  // 2*2 =4
}