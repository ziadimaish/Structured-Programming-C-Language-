//Name: Ziad Imaish
//ID: 20210052
#include <stdio.h>

int main() {
  char a[9];
  int counter=0;
  int value=1;
  int x=1;

  printf("Input 10 characters\n");
  for( int i=0;i<10;i++)
  {scanf(" %c",&a[i]);


  if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
  
  {    counter++;  }
      
    value=(counter*100);
    x=value/10;}
  printf("percentage of vowels=%d%%",x);
  return 0;
}