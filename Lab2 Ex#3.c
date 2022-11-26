#include <stdio.h>

int main(void) {
  char x;
  printf("Input a character from your keyboard\n");
  scanf("%c",&x);
  
  
  
  if(x<90 && x>65)
  {printf("The lower case of %c is:\n",x);
  printf("%c",x+32);}
  else
  if(x<122 && x>97)
  {printf("The upper case of %c is:\n",x);
  printf("%c",x-32);}
  else
  printf("The entered value is incorrect");
  


  
  
  
  
  
  
  
  
  
  
  
  
  return 0;
}