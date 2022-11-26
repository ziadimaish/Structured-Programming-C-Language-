//Name:Ziad Imaish
//ID:20210052
#include <stdio.h>
int balance=0;


void printmenu(){
printf("\nWhat do you want to do?\n");
 printf("1. Deposit\n");
 printf("2. Withdraw\n");
 printf("3. Display balance\n");
 printf("4. Exit\n\n");}


void displayBalance(){
  printf("Current balance: JD %d\n",balance);
}
void deposit(int dep){
  
  balance=balance+dep;
  displayBalance();
}

void withdraw(int with){
  if(with<balance){
    printf("OK!\n");
  balance=balance-with;
  
  displayBalance();}
  else
  {
    printf("Invalid transaction, insufficient balance!\n");
    displayBalance();
  }
}

int main(void) {


int choice;
 
 printmenu();
 scanf("%d",&choice);
if(choice==1){
   int dep;
   printf("Amount of deposit (JD):\t");
   scanf("%d",&dep);
deposit(dep);
 }
 else
 if(choice==2){
   int with;
   printf("Amount to withdraw (JD):\t");
   scanf("%d",&with);
withdraw(with);
}
else 
if(choice==3){
  displayBalance();
}
else
if(choice==4){
  printf("Thank You\n");
  return 0;}

  while(choice==1 ||choice==2 ||choice==3 || choice==4)
  {printmenu();
 scanf("%d",&choice);
if(choice==1){
   int dep;
   printf("Amount of deposit (JD):\t");
   scanf("%d",&dep);
deposit(dep);
 }
 else
 if(choice==2){
   int with;
   printf("Amount to withdraw (JD):\t");
   scanf("%d",&with);
withdraw(with);
}
else 
if(choice==3){
  displayBalance();
}
else
if(choice==4){
  printf("Thank You\n");
  return 0;
  }}
  return 0;
}

