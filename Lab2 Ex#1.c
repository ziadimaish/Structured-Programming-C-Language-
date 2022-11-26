#include <stdio.h>
/*Name: Ziad Imaish
  ID: 20210052
*/  

int main(void) {
  int x;
  int y;
  int z;

  printf("Input 3 numbers:\n");
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);
   
  int k;

  k=(x>y)?x:y;

  int m;

  m=(z>k)?z:k;

  printf("The maximum number is: %d",m);






  return 0;
}