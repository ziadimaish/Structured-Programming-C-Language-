//Name:Ziad Imaish
//ID:20210052
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define rows 5
#define cols 5

void fillArray(int tab[rows][cols]);
void printArray(int tab[rows][cols]);
void findSumDiagonal(int tab[rows][cols]);
void findSumAboveDiagonal(int tab[rows][cols]);
void findSumBelowDiagonal(int tab[rows][cols]);

int main(void){
  int arr[rows][cols];

  fillArray(arr);
  printArray(arr);
  printf("\nThe sum of the numbers above the diagonal is ");
  findSumAboveDiagonal(arr);
  printf("\nThe sum of the numbers below the diagonal is ");
  findSumBelowDiagonal(arr);
  printf("\nThe sum of the numbers in the diagonal is ");findSumDiagonal(arr);

return 0;}




void fillArray(int tab[rows][cols]){
  
for(int i=1; i<=rows; i++)
for(int j=1; j<=cols; j++)
 tab[i][j]=rand()%10;
}

void printArray(int tab[rows][cols]){

for(int i=1; i<=rows; i++){
for(int j=1; j<=cols; j++){
printf("%d\t",tab[i][j]);
}
printf("\n"); 
}
}

void findSumDiagonal(int tab[rows][cols]){
  int sum=0;
  for(int i=1; i<=rows; i++){
for(int j=1; j<=cols; j++)
if(i==j){
  sum+=tab[i][j];}
}
}

void findSumAboveDiagonal(int tab[rows][cols]){
  int sum=0;
  for(int i=1; i<=rows; i++){
for(int j=1; j<=cols; j++)
if(j>i){
  sum+=tab[i][j];}
}
}

void findSumBelowDiagonal(int tab[rows][cols]){
  int sum=0;
  for(int i=1; i<=rows; i++){
for(int j=1; j<=cols; j++)
if(j<i){
  sum+=tab[i][j];}
}
}