
#include <iostream>
#include <stdexcept>
using namespace std;

// Custom Exception
class InsufficientBalance : public runtime_error {
public:
    InsufficientBalance()
        : runtime_error("Insufficient balance!") {}
};

class InvalidAmount : public runtime_error {
public:
    InvalidAmount()
        : runtime_error("Invalid transaction amount!") {}
};

// Bank Account Class
class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    void withdraw(double amount) {
        if (amount <= 0)
            throw InvalidAmount();

        if (amount > balance)
            throw InsufficientBalance();

        balance -= amount;
        cout << "Withdrawal successful!" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(5000);

    try {
        account.withdraw(6000);
    }
    catch (InvalidAmount& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (InsufficientBalance& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
