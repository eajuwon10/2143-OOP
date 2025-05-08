#include <iostream>

class BankAccount {
private:
    // Keeps track of the account's balance
    double balance;
    // identifier for the account
    int accountNumber;

public:
    // Constructor to initialize the account
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        // Ensure initial balance is not negative
        balance = (initialBalance >= 0) ? initialBalance : 0.0;
    }
    // Deposits a positive amount into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
        else {
            std::cout << "Deposit amount must be positive.\n";
        }
    }
    // Withdraws a specified amount if sufficient balance is available
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
        else {
            std::cout << "Insufficient balance or invalid amount.\n";
        }
    }
    // Getter to view current balance
    double getBalance() const {
        return balance;
    }
};


//To clearly communicate to other developers that they should not directly
//manipulate the balance, you can use commentsand /or documentation 
//- style comments(like Doxygen) directly in the class.
//Use descriptive comments directly above each member.
//Emphasize not modifying private members directly.
//Use Doxygen - style comments(/** ... */) if generating documentation automatically.