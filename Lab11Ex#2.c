//Name:Ziad Imaish
//ID:20210052
#include <stdio.h>
void reverse(int*start, int*end);

int main(void) {
  int size;
  printf("How many numbers to read (<100):");
  scanf("%d",&size);
  int a[size];
  for(int i=0;i<size;i++){
  printf("arr[%d] = ",i);
  scanf("%d",&a[i]);}

  printf("\nOriginal array is:\n");
  for(int i=0;i<size;i++){
  printf("%d\t",a[i]);}


  printf("\nReversed array is:\n");
  reverse(a,a + size-1);
  for(int i=0;i<size;i++){
    printf("%d\t",a[i]);
  }
  return 0;
}

void reverse(int *start, int *end){
   

  while(end > start)
  {
    int temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }

}