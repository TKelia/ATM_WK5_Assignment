#include <stdio.h>
#include "user_management.h"
#include "transaction_management.h"

int main() {
    struct User *current_user = NULL;
    int choice;

    while (1) {
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                register_user(); 
                break;
            case 2: 
                login(&current_user); 
                while (current_user) {
                    printf("\nChoose an option:\n");
                    printf("1. Check Balance\n");
                    printf("2. Deposit Money\n");
                    printf("3. Withdraw Money\n");
                    printf("4. View Transactions\n");
                    printf("5. Log Out\n");
                    printf("Enter your choice: ");
                    scanf("%d", &choice);

                    switch (choice) {
                        case 1: check_balance(current_user); break;
                        case 2: deposit(current_user); break;
                        case 3: withdraw(current_user); break;
                        case 4: view_transactions(current_user); break;
                        case 5: printf("Logged out successfully.\n"); current_user = NULL; break;
                        default: printf("Invalid choice. Please try again.\n"); break;
                    }
                }
                break;
            case 3: 
                printf("Exiting...\n");
                return 0;
            default: 
                printf("Invalid choice. Please try again.\n"); 
                break;
        }
    }

    return 0;
}