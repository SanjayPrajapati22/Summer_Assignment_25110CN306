#include<stdio.h>


struct Bank
{
  int accno;
  char name[50];
  float balance;
};

int main(){
    struct Bank b;

    printf("enter account number:");
    scanf("%d", &b.accno);


printf("Enter account holder name:");
scanf("%s",b.name);

 printf("enter balance:");
 scanf("%f", &b.balance);


 printf("\n==== Bank Account Detials =====\n");
 printf("Account Number    :%d\n",b.accno);
 printf("account holder    : %s\n", b.name);
 printf("Balance       :%2f\n", b.balance);



 return 0;

}