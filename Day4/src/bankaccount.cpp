#include <iostream>

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account number and initial balance
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << std::endl;
            displayBalance();
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew: $" << amount << std::endl;
            displayBalance();
        } else if (amount > balance) {
            std::cout << "Insufficient balance for withdrawal." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount." << std::endl;
        }
    }

    // Function to display the current balance
    void displayBalance() const {
        std::cout << "Current balance: $" << balance << std::endl;
    }
};

int main() {
    // Create a BankAccount object with account number 12345 and initial balance of $1000
    BankAccount myAccount(12345, 1000.00);

    int choice;
    double amount;

    do {
        // Display the menu options
        std::cout << "\nBank Account Menu:\n";
        std::cout << "1. Deposit money\n";
        std::cout << "2. Withdraw money\n";
        std::cout << "3. Check balance\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter amount to deposit: $";
                std::cin >> amount;
                myAccount.deposit(amount);
                break;
            case 2:
                std::cout << "Enter amount to withdraw: $";
                std::cin >> amount;
                myAccount.withdraw(amount);
                break;
            case 3:
                myAccount.displayBalance();
                break;
            case 4:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
