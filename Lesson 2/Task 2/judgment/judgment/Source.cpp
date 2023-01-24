#include <iostream>
#include <string>


using namespace std;

struct bank_account {
	int number;
	string owner_name;
	double balance;
};

int main() {
	bank_account account;

	cout << "Enter new account number: ";
	cin >> account.number;
	cout << "Enter owner's name: ";
	cin >> account.owner_name;
	cout << "Enter account balance: ";
	cin >> account.balance;
	cout << "Enter new account balance: ";
	cin >> account.balance;
	cout << "Your bank account: ";
	cout << "\n - owner's name: " << account.owner_name;
	cout << "\n - account number: " << account.number;
	cout << "\n - account balance: " << account.balance;

	return 0;
}