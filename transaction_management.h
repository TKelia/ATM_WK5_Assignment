#ifndef TRANSACTION_MANAGEMENT_H
#define TRANSACTION_MANAGEMENT_H

#include "user_management.h"

void check_balance(struct User *current_user);
void deposit(struct User *current_user);
void withdraw(struct User *current_user);
void view_transactions(struct User *current_user);

#endif 