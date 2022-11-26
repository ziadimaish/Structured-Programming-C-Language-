//Name: Ziad Imaish
//ID:20210052
//Ex#1
#include <stdio.h>

int main(void) {
  int num;
  int count=0;
  int count2=0;
  int count3=0;
  int sum=0;
  int sum2=0;
  int sum3=0;

    
    printf("Enter a number\n");
    scanf("%d",&num);
  
  int i=0;

  while(1){
     
    
    

   if(num<0)
   {count++;
   sum=sum+num;}
  else
   if(num>0 && num<500)
   {count2++;
   sum2=sum2+num;}
else
   if(num>500)
   {count3++;
   sum3=sum3+num;}

   if(num==0){
     i++;
    break;}
   
   printf("Enter a number\n");
    scanf("%d",&num);
    
  }
  printf("\n\nThe numbers in group A is: %d\n",count);
  printf("The numbers in group B is: %d\n",count2);
  printf("The numbers in group C is: %d\n",count3);
  printf("\n\nThe sum of group A is: %d\n",sum);
  printf("The sum of group B is: %d\n",sum2);
  printf("The sum of group C is: %d\n",sum3);
  
 





  

  
  
  


  return 0;
}