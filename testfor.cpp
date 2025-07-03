#include <iostream>
using namespace std;
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
    	void setAccountNumber(string an){
			accountNumber = an;
		} 
		
		string getBalance(){
			return balance;
		}
    
    getAccountNumber(){
		return accountNumber;
	}
	getbalance(){
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

	getInterestRate(){
		return rate;
		
	}
};int main() {
   
    SavingsAccount myAccount("Patrick Wangai", 56785, 100640.50, 0.0995);

    cout << "SavingsAccount created." << endl;

    return 0;
}
