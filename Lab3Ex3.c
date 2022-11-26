//Name: Ziad Imaish
//ID: 20210052
#include <stdio.h>

int main(void) {
  int a[9];
  int even=0;
  int odd=0;

 
 

  printf("Input 10 elements\n");
  for(int i=0;i<10;i++){
    scanf(" %d",&a[i]);
    
    
    switch(a[i]%2){
   case 0:
   even++;
   break;
   case 1:
   odd++;
   break;

   
   }
   }
   

   
   
   {printf("Number of even elements:%d\n",even);
   printf("\nNumber of odd elements:%d\n",odd);}
  return 0;
}