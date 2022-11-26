//Name:Ziad Imaish
//ID:20210052
#include <stdio.h>
#define size 100

int recusive_upper__case_count(char *a[]);

int main(void) {
  char arr1[size];
  char arr2[size];
  printf("Enter the First String (without spaces)\n");
  scanf("%s",arr1);

  printf("Enter the Second String (without spaces)\n");
  scanf("%s",arr2);

recusive_upper__case_count(arr1);
  return 0;
}

int recusive_upper__case_count(char *a[])
{
   int i=0;
   int count=0;

  if(*a[i] == '\0') 
  return count;

  if (*a[i]>='A' && *a[i]<='Z') {
      //printf("\t%d\t", count);

    count++;}
  
    i++;

  return recusive_upper__case_count(a);
}

