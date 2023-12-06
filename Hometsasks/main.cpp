#include <iostream>

class BankAccount {
private:
    double balance;
    std::string accountNumber;

public:
    BankAccount(double balance, const std::string accountNumber) : balance(balance), accountNumber(accountNumber) {}
    void deposit(double amount) {
        balance += amount;
        std::cout << "You top up your bank account" << std::endl;
        std::cout << "Your balance: " << getBalance() << std::endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "You withdraw some money" << std::endl;
            std::cout << "Your balance: " << getBalance() << std::endl;
        } else {
            std::cout << "Недостаточно средств" << std::endl;
        }
    }

    double getBalance() {
        return balance;
    }

    std::string getAccountNumber() {
        return accountNumber;
    }
};

int main() {
    // Создание экземпляра класса "БанковскийСчет"
    BankAccount Andrew(1000.0, "1234567890");

    Andrew.deposit(500.0);
    Andrew.withdraw(300.0);
    return 0;
}
