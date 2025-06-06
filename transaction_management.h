// transaction_management.h

#ifndef TRANSACTION_MANAGEMENT_H
#define TRANSACTION_MANAGEMENT_H

#define MAX_TRANSACTIONS 100
#define MAX_TRANSACTION_LENGTH 100

struct User {
    float balance;
    char transaction_log[MAX_TRANSACTIONS][MAX_TRANSACTION_LENGTH];
    int transaction_count;
};

// Declare the functions if needed elsewhere
void check_balance(struct User *current_user);
void deposit(struct User *current_user);
void withdraw(struct User *current_user);
void view_transactions(struct User *current_user);

#endif
