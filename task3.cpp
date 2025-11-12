#include <iostream>
using namespace std;

class Account
{
	private:
		int accountNumber, balance;
	public:
		int deposit(int a)
		{
			balance = balance+a;
			cout<<"New Balance: "<<balance<<endl;
			return balance;
		}
		int withdraw(int w)
		{
			balance = balance-w;
			cout<<"Current balance: "<<balance<<endl;
			return balance;
		}
		int displayBalance(int accNo)
		{
			cout<<"Acc no, :"<<accNo<<endl;
			cout << "Account No:"<<accountNumber<<endl;
			cout<<"Current Balance: "<<balance<<endl;
			return balance;
		}

};

class SavingsAccount : public Account {
	public:
		int withdraw (int amnt)
		{
			if(amnt>50000)
				cout<<"Withdraw Limit Exceed"<<endl;
			return 0;
		}
};


int main()
{
	//deposit d;
	//withdraw w;
	//displayBalance b;
	Account a;
	int i,j;
	cout<<"Class and Encapsulation Completed"<<endl;
	cout<<"Do you want to 1) Deposit, 2) Withdraw, 3) Check Balance"<<endl;
	cin >> i;
	switch (i) 
	{
		case 1:
			cout<<"Enter Amount: "<<endl;
			cin>> j;
			a.deposit(j);
			break;
		case 2:
			cout<<"Enter Amount: "<<endl;
			cin>>j;
			a.withdraw(j);
			break;
		case 3:
			cout<<"Enter account no. : "<<endl;
			cin>>j;
			a.displayBalance(j);
			break;
		default:
			cout<<"Enter correct option no.!"<<endl;
			break;
	}

	return 0;
}

			

