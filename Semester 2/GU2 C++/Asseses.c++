#include <iostream>
#include <vector>
using namespace std;

class Account {
public:
    int accNo;
    string name;
    double balance;
    int transactionCount;

    // Constructor
    Account(int a, string n, double b) {
        accNo = a;
        name = n;
        balance = b;
        transactionCount = 0;
    }

    // Deposit Function
    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount!\n";
            return;
        }
        balance += amount;
        transactionCount++;
        cout << "Deposit successful!\n";
    }

    // Withdraw Function
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!\n";
            return;
        }
        if (balance - amount < 500) {
            cout << "Minimum balance of ₹500 must be maintained!\n";
            return;
        }
        balance -= amount;
        transactionCount++;
        cout << "Withdrawal successful!\n";
    }

    // Display Function
    void display() {
        cout << "\nAccount No: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: ₹" << balance;
        cout << "\nTransactions: " << transactionCount << endl;
    }
};

// Function to check duplicate account number
bool isDuplicate(vector<Account> &accounts, int accNo) {
    for (auto &acc : accounts) {
        if (acc.accNo == accNo)
            return true;
    }
    return false;
}

// Function to find account
int findAccount(vector<Account> &accounts, int accNo) {
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accNo == accNo)
            return i;
    }
    return -1;
}

int main() {
    vector<Account> accounts;
    int choice;

    do {
        cout << "\n===== Banking System Menu =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int accNo;
            string name;
            double balance;

            cout << "Enter Account Number: ";
            cin >> accNo;

            if (isDuplicate(accounts, accNo)) {
                cout << "Account number already exists!\n";
                break;
            }

            cout << "Enter Name: ";
            cin >> name;

            cout << "Enter Initial Balance: ";
            cin >> balance;

            if (balance < 500) {
                cout << "Minimum balance should be ₹500!\n";
                break;
            }

            accounts.push_back(Account(accNo, name, balance));
            cout << "Account created successfully!\n";
            break;
        }

        case 2: {
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;

            int index = findAccount(accounts, accNo);
            if (index == -1) {
                cout << "Account not found!\n";
                break;
            }

            cout << "Enter amount to deposit: ";
            cin >> amount;

            accounts[index].deposit(amount);
            break;
        }

        case 3: {
            int accNo;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNo;

            int index = findAccount(accounts, accNo);
            if (index == -1) {
                cout << "Account not found!\n";
                break;
            }

            cout << "Enter amount to withdraw: ";
            cin >> amount;

            accounts[index].withdraw(amount);
            break;
        }

        case 4: {
            int accNo;
            cout << "Enter Account Number: ";
            cin >> accNo;

            int index = findAccount(accounts, accNo);
            if (index == -1) {
                cout << "Account not found!\n";
                break;
            }

            accounts[index].display();
            break;
        }

        case 5:
            cout << "Exiting system...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}











