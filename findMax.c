#include <stdio.h>

int main(){
  int data[] = {23,56,810,90,120};
  int max = data[0];
  int length = sizeof(data)/sizeof(data[0]);

  for (int i = 0; i < length; i++)
  {   
    if(data[i] > max){
      max = data[i];      
    }   
  }
  
   printf("%d\n",max);
  
  // {23,56,8,90,120}
}