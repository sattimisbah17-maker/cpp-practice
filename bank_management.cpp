#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double balance = 0;
    double amount;
    int choice;

    cout << "=== BANK MANAGEMENT SYSTEM ===\n";

    cout << "Enter account holder name: ";
    getline(cin, name);

    do {
        cout << "\n1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful!\n";
                } else {
                    cout << "Invalid amount!\n";
                }

                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount > balance) {
                    cout << "Insufficient balance!\n";
                } else if (amount <= 0) {
                    cout << "Invalid amount!\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful!\n";
                }

                break;

            case 3:
                cout << "Account Holder: " << name << endl;
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 4:
                cout << "Thank you for using our bank system!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}