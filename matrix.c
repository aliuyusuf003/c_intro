#include <stdio.h>

int main(){
  int data[2][3] = {{2,8,4},{1,90,10}}; //2D arrays.
 

  int length = sizeof(data)/sizeof(data[0]);
    

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d\n",data[i][j]);
    }
    
  }
  
  
  
  
  // "I love to program!"
  // go through string from the end and append to empty string.
}