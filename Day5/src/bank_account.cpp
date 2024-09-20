#include <iostream>
#include <string>
using namespace std;

// Person Class
class Person {
protected:
    string name;
    int age;
    
public:
    void inputPersonInfo() {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your age: ";
        cin >> age;
        cin.ignore();
    }
    
    void displayPersonInfo() const {
        cout<<"======================"<<endl;
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Bank Branch Class
class Branch {
private:
    string branchName;
    string location;
    
public:
    void inputBranchInfo() {
        cout << "Enter branch name: ";
        getline(cin, branchName);
        cout << "Enter branch location: ";
        getline(cin, location);
    }
    
    void displayBranchInfo() const {
        cout << "Branch: " << branchName << ", Location: " << location << endl;
    }
};

// Class Bank Account (Has-a Person and Branch)
class Account : public Person {
private:
    int accountNumber;
    double balance;
    Branch branch;

public:
    void createAccount() {
        inputPersonInfo();
        branch.inputBranchInfo();
        
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter initial balance: $";
        cin >> balance;
        cin.ignore();
    }

    void displayAccountInfo() const {
        displayPersonInfo();
        branch.displayBranchInfo();
        cout << "Account Number: " << accountNumber << ", Balance: $" << balance << endl;
        cout<<"======================"<<endl;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: $";
        cin >> amount;
        balance += amount;
        cout << "Deposited: $" << amount << ", New Balance: $" << balance << endl;
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: $";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: $" << amount << ", New Balance: $" << balance << endl;
        }
    }
};

int main() {
    Account acc;

    acc.createAccount();

    acc.displayAccountInfo();

    bool exit = false;
    while (!exit) {
        cout << "\nWhat would you like to do?\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Account Info\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                acc.deposit();
                break;
            case 2:
                acc.withdraw();
                break;
            case 3:
                acc.displayAccountInfo();
                break;
            case 4:
                exit = true;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
