ATM_WK5_Assignment

A simple command-line ATM system that allows users to perform basic banking operations.

Problem Statement
The ATM system allows multiple predefined users to log in and perform basic banking operations, such as checking their balance, depositing money, withdrawing funds, and viewing their transaction history. The system simulates a real ATM interface using fundamental programming concepts.

Assumptions
- Each user has a unique username and a 4-digit PIN.
- The system supports a maximum of 5 users.
- Each user can have up to 10 transactions recorded in their history.
- The system is designed for educational purposes to demonstrate basic C programming concepts.

How to Compile and Run
1. Compile the code using a C compiler (e.g., GCC):
   ```bash
   gcc main.c transaction_management.c user_management.c -o main
   ```

2. Run the executable:
   ```bash
   ./main
   ```

Sample Input/Output
Sample Input
1. User chooses to register or log in.
2. User enters a username and PIN for login.
3. User selects an operation (Check Balance, Deposit, Withdraw, View Transactions, Logout).

Sample Output
```plaintext
1. Register
2. Login
3. Exit
Choose an option: 2
Enter username: tesi
Enter PIN: 1234
Login successful! Welcome, tesi.

Choose an option:
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. View Transactions
5. Log Out
Enter your choice: 1
Your balance is: $0.00
```

```plaintext
Enter amount to deposit: 100
Successfully deposited $100.00.
```

```plaintext
Enter amount to withdraw: 50
Successfully withdrew $50.00.
```

```plaintext
Transaction History:
Deposited: $100.00
Withdrew: $50.00
```

Key Functions and Design Choices
- **Modular Design**: The code is organized into separate files for user management, transaction handling, and the main program logic, promoting readability and maintainability.
- **User Structure**: A `struct` is used to encapsulate user-related data, making it easy to manage user accounts and transactions.
- **Array Usage**: Arrays are utilized for storing user data and transaction logs, allowing efficient access and modification.
- **Control Flow**: The program employs control structures (if-else and switch statements) to manage user input and system flow effectively.

Features
- Login with username and PIN
- Check account balance
- Deposit money
- Withdraw money
- View transaction history
- Logout
```

This README serves as a comprehensive guide for users and developers interacting with ATM system.
