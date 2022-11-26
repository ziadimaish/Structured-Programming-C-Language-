//Name: Ziad Imaish
//ID: 20210052
#include <stdio.h>

#define size 25
int main(void) {

  char ch[size];
  char ch2[size];

  printf("Input a string to check whether it is palindrome or not:\n");
  scanf("%s",ch);

int count=0;
  int i=0;

  while(ch[i] != '\0')
  {
    count++;
    i++;
  }
  

  
  
  return 0;
}