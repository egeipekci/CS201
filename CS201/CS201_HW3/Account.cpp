	#include "Account.h"
	
	Account::Account()	{
		this->customerId = -1;
    	this->amount = 0;
		//this->accountId = 1;	
	}
	
    Account::Account( const int customerId,  const double amount )	{
    	static int accountId = 1;
		this->customerId = customerId;
    	this->amount = amount;
		this->accountId = accountId;
		accountId++;

	}
	
    int Account::getCustomerId()	{
    	return customerId;
	}

	int Account::getAccountId()	{
    	return accountId;
	}

    double Account::getAmount()	{
    	return amount;
	}
	
 