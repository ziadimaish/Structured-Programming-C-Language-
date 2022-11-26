//Name: Ziad Imaish
//ID: 20210052
#include <stdio.h>

#define size 100
int main(void) {
  int nos[size]={0};
  int x[size];
  int y=0;
  int i;
  
  printf("Please enter the number of students N:\t");

  
  scanf("%d",&nos[y]);

  
  printf("\nEnter student grades\n");



  for( i=0;i<nos[y];i++)
  {scanf("%d",&x[i]);

if(x[i]>10 || x[i]<0)
printf("Erorr: Enter a number between 0 and 10\n\n");
}


int count=0;
printf("\nThe frequency of marks:\n");

for(i=0;i<nos[y];i++){
if(x[i]==x[i+1])
  count++;}
  

  for(i=0;i<nos[y];i++)
  printf("%d: %d",x[i],count);





  return 0;
}