//Name:Ziad Imaish
//ID:20210052
#include <stdio.h>
#define size 100
void input(char a[]);
void inverse(char a[]);
void upper(char a[]);
int main(void) {
   char mystring[size];
  
   
   input(mystring);
  
  printf("\nThe inverse is:\n");

  inverse(mystring);


  return 0;
}

void input(char a[])
{
  printf("Input your string\n");
  scanf("%s", a);
}

void inverse(char a[]){
  char inv;
  int length =0;
  for(int i=0;a[i]!='\0';i++)
  {length++;}

  for(int i=length-1; i>=0; i--)
  {
  printf("%c",a[i]);
  }
} 
  

