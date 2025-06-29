#include <iostream>
using namespace std;

// (i) Base class: AccountHolder
class AccountHolder {
protected:
    string name; 
};

// (ii) Derived class: BankAccount inherits from AccountHolder
class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int accNo, double bal) {
        name = n;                // set protected member from base class
        accountNumber = accNo;
        balance = bal;
    }

   
};

// (iii) Derived class: SavingsAccount inherits from BankAccount
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string n, int accNo, double bal, double rate)
        : BankAccount(n, accNo, bal) {
        interestRate = rate;
    }

};


int main() {
   
    SavingsAccount myAccount("Patrick Wangai", 56785, 100640.50, 0.0995);

    cout << "SavingsAccount created." << endl;

    return 0;
}