//class Account {
//	// string representing the name of the account's owner
//	string name;
//	// the account number
//	int id;
//	// the current account balance
//	double balance;
//public:
//	/*
//	*	deposit(amt)
//	*		Adds amount amt to the account's balance.
//	* 
//	* 
//	*		Author: luigi
//	*		Date: September 9, 2022.
//	*/
//	void deposit(double amt) {
//		balance += amt;
//	}
//
//	/*
//	*	withdraw(amt)
//	*		Deducts amount amt from the account's balance, if possible.
//	*		Returns true if successful;
//	*		otherwise, it returns false.
//	*		A call can fail if the withdraw would cause the balance to fall below zero.
//	* 
//	*		amt : funds to withdraw
//	* 
//	*		Author: luigi
//	*		Date: September 9, 2022
//	*/
//	bool withdraw(double amt) {
//		bool result = false; // unsuccessful by default
//		if (balance - amt >= 0) {
//			balance -= amt;
//			result = true; // success
//		}
//		return result;
//	}
//};