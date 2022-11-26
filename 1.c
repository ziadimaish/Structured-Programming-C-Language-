/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int isPrime(int n, int i)
{
    // Base cases
    
    if (n % i == 0) // 7%2 == 1 7%3 == 0 
        return 10;
    if (i >= n) // 2*2 = 4 >7   3*3 > 7
        return 1;
 
    // Check for next divisor
    return isPrime(n, i + 1); // isprime(7,3)
}
int main()
{
   
    int n; 
    //int i=2;
    printf("Please Enter n \n");
    scanf("%d",&n);
    int flag = isPrime(n,2); //1
    
    printf("%d \n",flag);
    if(flag == 1)
    printf("The value is prime %d\n ",n);
    else
    printf(" the value is not prime%d\n",n);
    
    

    
}
