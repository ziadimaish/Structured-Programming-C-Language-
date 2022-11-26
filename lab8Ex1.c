//Name:Ziad Imaish
//Id:20210052
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRND(){
   return rand()%(95-8+1)+8;
   }


int isEqual(){
  int r,r2;
  if(r == r2)
  return rand()%(95-8+1)+8;
  else 
  return 1;
}


int findLCM(int r, int r2, int GCD){
  
  if(r>r2)
  GCD=r;
  if(r2>r)
  GCD=r2;
return (r*r2)/GCD; 
}



int main(void) {
  int r,r2,r3;
srand(time(0));
  r=generateRND();
  printf("RND1:%d\n",r);
  r2=generateRND();
  printf("RND2:%d\n",r2);

  if(r==r2){
  r3=isEqual();
  printf("RND2:%d\n",r3);}

int GCD;
  printf("The LCM of %d and %d is %d",r,r2,findLCM(r,r2,GCD));


 
  return 0;
}
