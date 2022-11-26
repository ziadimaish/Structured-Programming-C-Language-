//Name:Ziad Imaish
//ID:20210052
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 6 

int findHighest(int x[]);
int findLowest(int x[]);
int findGCD(int a , int b);
int intDivision(int x, int y);


int main(void) {
  int Numbers[size]={0};

  srand(time(0));

  for(int i=0;i<size;i++)
  {Numbers[i]=2+rand()%(12-2+1);}

  printf("The array has been filled with 6 random numbers as following:\n\n");
  printf("-------------------------------\n\n");
  printf("Index\t\t Value\n");

  for(int i=0;i<size;i++){
    printf("%d\t\t     %d\n\n",i,Numbers[i]);
  }
printf("-------------------------------\n\n");


  
  return 0;
}

