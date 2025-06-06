#ifndef USER_MANAGEMENT_H
#define USER_MANAGEMENT_H

struct User {
    char username[20];
    char pin[5]; // 4 digits + null terminator
    float balance;
    char transaction_log[10][50]; // Maximum 10 transactions
    int transaction_count;
};

extern struct User users[5]; // Maximum 5 users
extern int user_count;

void register_user();
void login(struct User **current_user);

#endif 