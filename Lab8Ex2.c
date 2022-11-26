//Name:Ziad Imaish
//Id:20210052
#include <stdio.h>

void readChar(){
  printf("Please enter a character:");
}


char whatCase(char chr){
  if(chr<='Z'&&chr>='A')
  return 1;
  else
  if(chr<='z'&&chr>='a')
  return 2;
  else 
  return 0;
}

char isSpecial(char chr){
  if(chr=='#'||chr=='$'||chr=='%'||chr=='@')
  return 1;
  else
  return 0;
}

void printChar(char chr, int r, int c){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      printf("%c",chr);
    }
    printf("\n");}
}

int main(void) {
 char chr;
 int c;
 int r;

readChar();
scanf(" %c",&chr);



if(whatCase(chr)==1){
  printf("%c is an uppercase alphabet\n",chr);
  printf("%c is not a special character\n",chr);
}
else
if(whatCase(chr)==2){
printf("%c is a lowercase alphabet\n",chr);
printf("%c is not a special character\n",chr);}
else
if(whatCase(chr)==0){
printf("%c is Not an alphabet\n",chr);}


if(isSpecial(chr)==1){
printf("%c is a special character\n",chr);
printChar(chr,6,10);}




  return 0;
}