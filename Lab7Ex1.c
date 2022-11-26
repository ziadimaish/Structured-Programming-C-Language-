//Name:Ziad Imaish
//ID:20210052
#include <stdio.h>
#include <math.h>

int main(void) {
  float a,b;
printf("Input 2 numbers:\n");
scanf("%f%f",&a,&b);

printf("the absolute value of %.1f and %.1f= %.1f, %.1f\n",b,a,fabs(b),fabs(a));

printf("remainder of dividing %.1f and %.1f= %.1f\n",a,b,fmod(a,b));

if(a<0||b<0){
printf("%.1f raised to the power of %.1f= %.4f\n",a,b,-pow((-a),b));}
else 
{printf("%.1f raised to the power of %.1f= %.4f\n",a,b,pow((a),b));}

printf("the largest integer value less than or equal to %.1f= %.1f\n",b,floor(b));

printf("the smallest integer value greater than or equal to %.1f= %.1f\n",a,ceil(a));
  return 0;
}

