#include <stdio.h>
/*
Name: Ziad Imaish
University ID: 20210052
*/

int main() {
  printf("Name:Ziad Imaish \n");
  printf("Major:Computer Engineeringn");
  printf("\n");
  printf("\n");
  int x;
  int y;
  int total;
  printf(">>Input the following information:\n");
  printf("-Number of courses(c):\n");
  scanf("%d",&x);
  printf("-Credit hours for each course (h)\n");
  scanf("%d",&y);
  printf("\n");
  printf("\n");
  total = x *y;
    printf(">>Total number of hours registered for this term= %d",total);



  
  
  return 0;
}