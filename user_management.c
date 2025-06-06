#include <stdio.h>
#include <string.h>

struct User {
    char username[20];
    char pin[5]; // 4 digits + null terminator
    float balance;
    char transaction_log[10][50]; // Maximum 10 transactions
    int transaction_count;
};

struct User users[5]; // Maximum 5 users
int user_count = 0;

void register_user() {
    if (user_count >= 5) {
        printf("User limit reached. Cannot register more users.\n");
        return;
    }

    struct User new_user;
    printf("Enter username: ");
    scanf("%s", new_user.username);
    printf("Enter a 4-digit PIN: ");
    scanf("%s", new_user.pin);
    new_user.balance = 0.0;
    new_user.transaction_count = 0;

    // Store the new user
    users[user_count++] = new_user;
    printf("Registration successful! You can now log in.\n");
}

void login(struct User **current_user) {
    char username[20];
    char pin[5];

    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter PIN: ");
    scanf("%s", pin);

    for (int i = 0; i < user_count; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].pin, pin) == 0) {
            *current_user = &users[i];
            printf("Login successful! Welcome, %s.\n", (*current_user)->username);
            return;
        }
    }
    printf("Invalid username or PIN. Please try again.\n");
}
