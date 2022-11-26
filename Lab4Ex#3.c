//Name: Ziad Imaish
//ID:20210052
//Ex#3
#include <stdio.h>
#define size 5
int main(void) {
  int i=0;
  int element[size]={0};
  int element2[size]={0};
  printf("Please fill the first array\n");

  for( i=1;i<=size;i++){
  printf("The %dth element: ",i);
  scanf("%d",&element[i]);}


  printf("\nPlease fill the second array\n");

  for( i=1;i<=size;i++){
  printf("The %dth element: ",i);
  scanf("%d",&element2[i]);}


i=size;
if(element[i] == element2[i])
printf("The arrays are identical\n");
else
printf("\nThe arrays are not identical\n");



  
  
  return 0;
}