#include <iostream>
using namespace std;
class BankAccount { // Pascal Naming Convention
protected:
    int AccountNumber;
    double balance;
    double interestRate;
public:
    BankAccount( int accNum, double bal, double interest){
        AccountNumber = accNum;
        balance = bal;
        interestRate = interest;
    }
    void deposit(double amount){
        balance += amount;
        cout << "Deposited: $" << amount << endl;
        cout << "New Balance: $" << balance << endl;
    }
    void displayBalance(){
        cout << "Account Number: " << AccountNumber << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};
class SavingsAccount : public BankAccount {
private:
    double minimumBalance;
public:
    SavingsAccount(int accNum, double bal, double interest,
                   double minBal)
                   : BankAccount(accNum, bal, interest){
        minimumBalance = minBal;
    }
    void withdraw(double amount){
        if (balance - amount >= minimumBalance){
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
            cout << "New Balance: $" << balance << endl;
        } else{
            cout << "Cannot withdraw more than minimum balance: $"
            << minimumBalance << endl;
        }
    }
};
int main() {
    BankAccount bankAccount(1001, 5000, 3.5);
    cout << "Bank Account Details: " << endl;
    bankAccount.displayBalance();
    bankAccount.deposit(1500);

    SavingsAccount savingsAccount(2002, 6000, 4.2, 2000);
    cout << "Savings Account Details: " << endl;
    savingsAccount.displayBalance();
    savingsAccount.deposit(1000);
    savingsAccount.withdraw(5000);
    savingsAccount.withdraw(1);
    return 0;
}
