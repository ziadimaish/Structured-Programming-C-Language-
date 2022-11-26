//Name:Ziad Imaish
//ID:20210052
#include <stdio.h>

float areaByValue(float x);

float areaByRef(float *x);

int main(void) {
  float a;
  printf("Input a radius: ");
  scanf("%f",&a);


printf("\nThe function areaByValue return %.2f\n",areaByValue(a));

printf("The value on a in the main is %.2f\n",a);

areaByRef(&a);

printf("The function areaByRef prints %.2f\n",a);

printf("The value on a in the main is %.2f\n",a);
  return 0;
}

float areaByValue(float x){
  float area;
  area=x*x*3.14;
  
  return area;}


float areaByRef(float *area){
  float x;
  x=*area;
  *area=x*x*3.14;

  return *area;}
