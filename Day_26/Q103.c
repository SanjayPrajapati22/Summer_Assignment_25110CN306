#include<stdio.h>

int main(){
    int choice;
    float balance = 10000, amount;

    printf("=====ATM Simulation ====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("enter  your choice:");

    scanf("%d", &choice);

switch(choice){
    case 1:
        printf("Available Balance = %.2f\n", balance);
        break;

    case 2:
        printf("Enter deposit amount:");
        scanf("%f", &amount);

        balance = balance + amount;


        printf("Deposit Successful.\n");
        printf("update Balance = %.2f\n",balance);
        break;

    case 3:

        printf("enter withdrawal amount:");
        printf("%f", &amount);

        if(amount <= balance)
        {
            balance = balance - amount;

            printf("Withdrawal Successful.\n");
            printf("Remaining Balance = %.2f\n", balance);
        }
        else
        {
         printf("Insufficent Balance.\n");
        }
        break;

   default:
       printf("invalid Choice");
}
    return 0;

}