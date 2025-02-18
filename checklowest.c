#include <stdio.h>

int main(){
  int data[] = {23,56,81,90,120};
  int lowest = data[0];
  int length = sizeof(data)/sizeof(data[0]);

  for (int i = 0; i < length; i++)
  {   
    if(data[i] < lowest){
      lowest = data[i];      
    }   
  }
  
   printf("%d\n",lowest);
  
  // {23,56,8,90,120}
}