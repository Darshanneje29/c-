#include<iostream>
using namespace std;

class BankAccount{
	private:
		string accountHolder;
		int accountNumber;
		string accountType;
        double balance;
        
	public:
		void getaccountHolder(){
			cout<<"Holder:"<<accountHolder<<endl;
		}
	    int getaccountNumber(){
			cout<<"AccountNumber :"<<accountNumber<<endl;
		}
		void getaccountType(){
			cout<<"Type :"<<accountType<<endl;
		}
		int getbalance(){
			cout<<"Balance :"<<balance<<endl;
		}
			
		BankAccount(){
	    	
			cout<<"default called";
		}
	    BankAccount(string Name,int n,string t,double b){
	    	accountHolder=Name;
			accountNumber=n;
			accountType=t;
			balance=b;
			cout<<"parameter called"<<endl;
		}
	 void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Depositing " << amount << "..." << endl;
            cout << "New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawing " << amount << "..." << endl;
            cout << "New Balance: " << balance << endl;
        } else {
            cout << "Insufficient funds or invalid amount." << endl;
        }
    }
	void finaldisplay(){
		cout<<"Final Account Details :"<<endl;
		cout<<"Holder:"<<accountHolder<<endl;
		cout<<"AccountNumber :"<<accountNumber<<endl;
		cout<<"Type :"<<accountType<<endl;
		cout<<"Balance :"<<balance<<endl;
	}			
};

int main(){
	BankAccount b1("Amar patil",1234,"saving",500);
	b1.getaccountHolder();
	b1.getaccountNumber();
	b1.getaccountType();
	b1.getbalance();
	b1.deposit(500);
	b1.withdraw(100);
	b1.finaldisplay();
	return 0;
}
