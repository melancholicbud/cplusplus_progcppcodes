//#include <iostream>
//#include <string>
//#include <vector>
//
//class Account {
//	// String representing the name of the account's owner
//	std::string name;
//	// the account number
//	int id;
//	// the current account balance
//	double balance;
//public:
//	// initialiazes a bank account object
//	Account(const std::string& customer_name, int account_number, double amount) :
//		name(customer_name), id(account_number), balance(amount) {
//		if (amount < 0) {
//			std::cout << "Warning: negative account balance\n";
//			balance = 0.0;
//		}
//	}
//
//	// adds amount amt to the account's balance
//	void deposit(double amt) {
//		balance += amt;
//	}
//	// Deducts amount amt from the account's balance, if possible.
//	// Returns true if successful; otherwise, it returns false.
//	// A call can fail if the withdraw would cause the balance below zero.
//	bool withdraw(double amt) {
//		bool result = false; // unsuccessful by default
//		if (balance - amt >= 0) {
//			balance -= amt;
//			result = true; // success
//		}
//		return result;
//	}
//
//	// displays information about the account object
//	void display() {
//		std::cout << "Name: " << name << ", ID: " << id << ", Balance: " << balance << '\n';
//	}
//};
//
//int main() {
//	Account acct1("Joe", 2312, 1000.00);
//	Account acct2("Moe", 2313, 500.29);
//	acct1.display();
//	acct2.display();
//	std::cout << "---------------------" << '\n';
//	acct1.withdraw(800.00);
//	acct2.deposit(22.00);
//	acct1.display();
//	acct2.display();
//}