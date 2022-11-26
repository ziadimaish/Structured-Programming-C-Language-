#include<stdio.h>

int convert(int decimal);
 
int main()
{
int decimal, binary;

printf("Enter a decimal number: ");
scanf("%d", &decimal);
binary = convert(decimal);
printf("The binary equivalent of %d is %d.\n", decimal, binary);
 

return 0;
}
 
int convert(int decimal)
{
if (decimal == 0)
{
return 0;
}
else
{
return (decimal % 2 + 10 * convert(decimal / 2));
}
}


// #include <stdio.h>
 
// int main()
// {
//     int  num, binary_val, decimal_val = 0, base = 1, rem;
 
//     printf("Enter a binary number(1s and 0s) \n");
//     scanf("%d", &num); /* maximum five digits */
//     binary_val = num;
//     while (num > 0)
//     {
//         rem = num % 10;
//         decimal_val = decimal_val + rem * base;
//         num = num / 10 ;
//         base = base * 2;
//     }
//     printf("The Binary number is = %d \n", binary_val);
//     printf("Its decimal equivalent is = %d \n", decimal_val);
//     return 0;
// }