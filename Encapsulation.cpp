/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:creating a simple bank statement
Date: 3/07/2025
version 1
*/
#include <iostream>
using namespace std;

// (i) Base class	

class AccountHolder {
	protected:
		string name;
		
    public:
    	void setName(string n){
			name = n;
		} 
		
		string getName(){
			return name;
		}
};
// (ii) Derived class	
class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int accNo, double bal) {
        name = n;                
        accountNumber = accNo;
        balance = bal;
    }
    public:
    
     int getAccountNumber(){
		return accountNumber;
	}
	int getbalance(){
		return balance;
	}
	

   
};


// (iii) Derived class	
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string n, int accNo, double bal, double rate)
        : BankAccount(n, accNo, bal) {
        interestRate = rate;
    }

	int getInterestRate(){
		return interestRate;
		
	}
};int main() {
   
    SavingsAccount myAccount("Patrick Wangai", 56785, 100640.50, 0.0995);

    cout << "SavingsAccount created." << endl;

    return 0;
}
