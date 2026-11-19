#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

protected:
    string accountHolder;

public:
    BankAccount(string name, double amount) {
        accountHolder = name;
        balance = amount;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("Student", 1000);

    account.deposit(500);
    account.display();

    return 0;
}