/*
Name: Ziad Imaish
ID: 20210052
Section: 1
*/
#include <stdio.h>

int main(void) {
  int x;
  float min=0;
  float a[x];

  printf("How many numbers you want to process\n\n");
  scanf("%d",&x);
  printf("\nEnter %d numbers:\n",x);
  
  for(int i=0;i<x;i++){
    scanf("%f",&a[i]);
    if(a[i]<min)
    min=a[i];
  }
  printf("The minimum is:%f",min);

  return 0;
}
