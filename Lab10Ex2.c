//Name:Ziad Imaish
//ID:20210052
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int result(int x, int y);
void input(int z);
int guess(int x, int y,int z);

int main(void) {

  int x;
  int user;
  srand(time(0));
  int r=2+rand()%(12-2+1);
  
  printf("Input your integer here:\t");
  scanf("%d",&x);
  
  printf("\n\nI will generate the random number %d and check how much is its multiplication by %d.",r,x);

  printf("\n\nComputer: I generated the random number %d. How much is %d x %d\n\n",r,x,r);

input(user);
guess(x,r,user);

  return 0;
}


int result(int x, int y){
  if(x==0)
    return 0;
  return y + result(y,x-1);
}

void input(int z){
printf("User:\t");
scanf("%d",&z);
}

int guess(int x, int y ,int z){

 if(z==result(x,y))
  return printf("\nComputer: Excellent.\n");  
else 

if(z!=result(x,y)){

printf("\nComputer: No.Try Again.\n");
input(z);
}
}