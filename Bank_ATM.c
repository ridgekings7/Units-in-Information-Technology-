#include <stdio.h>

int main(){
    
    int balance = 300000;
    int amount;

    printf("Account balance: %d\n", balance);
    
    while(balance>0){
        printf("\nEnter the amount you wish to withdraw: ");
        scanf("%d", &amount);
        balance= balance-amount;

        printf("Account balance: %d\n", balance);

    if(balance<=0){
        printf("You have insufficient funds to withdraw :%d\n", amount);
        printf("Your current balance is: %d\n", balance);
        printf("Please enter a valid amount to withdraw:");
        break;
        }
    }
    return 0;
}