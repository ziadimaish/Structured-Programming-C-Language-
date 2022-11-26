#include <stdio.h>
/*Name: Ziad Imaish
  ID: 20210052
*/  
int main(void) {
  char x;
  
  
  
printf("Enter a char of a shape to compute the area:\n"); 

printf("s for square\n");

printf("r for rectangular\n");

printf("c for circle\n");

printf("t for triangle\n");

scanf("%c",&x);

int l;
int sa;
int w;
int ra;
float r;
float ca;
float h;
float b;
float ta;

if(x!='s'&& x!='r'&& x!='c'&& x!='t')
printf("The entered value is incorrect");
else

if(x=='s')
{printf("Enter the length\n");
scanf("%d",&l);
sa= l*l;
printf("The area is: %d",sa);}
else 

if(x=='r')
{printf("Enter the length\n");
scanf("%d",&l);
printf("Enter the width\n");
scanf("%d",&w);
ra= w*l;
printf("The area is: %d",ra);}
else

if(x=='c')
{printf("Enter the radius\n");
scanf("%f",&r);
ca= 3.14* r * r;
printf("The area is: %0.2f",ca);}
else

if(x=='t')
{printf("Enter the base\n");
scanf("%f",&b);
printf("Enter the height\n");
scanf("%f",&h);
ta= 0.5 * b * h;
printf("The area is: %0.2f",ta);}

return 0;
}