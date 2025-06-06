#include <stdio.h>
#include "transaction_management.h"

void check_balance(struct User *current_user) {
printf("Your balance is: $%.2f\n", current_user->balance);
}

void deposit(struct User *current_user) {
float amount;
printf("Enter amount to deposit: ");
scanf("%f", &amount);
current_user->balance += amount;
sprintf(current_user->transaction_log[current_user->transaction_count++], "Deposited: $%.2f", amount);
printf("Successfully deposited $%.2f.\n", amount);
}

void withdraw(struct User *current_user) {
float amount;
printf("Enter amount to withdraw: ");
scanf("%f", &amount);

if (amount > current_user->balance) {
printf("Insufficient funds!\n");
} else {
current_user->balance -= amount;
sprintf(current_user->transaction_log[current_user->transaction_count++], "Withdrew: $%.2f", amount);
printf("Successfully withdrew $%.2f.\n", amount);
}
}

void view_transactions(struct User *current_user) {
printf("Transaction History:\n");
for (int i = 0; i < current_user->transaction_count; i++) {
printf("%s\n", current_user->transaction_log[i]);
}
}
