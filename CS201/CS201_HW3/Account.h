#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using std::string;
class Account
{
    public:
		Account();
        Account( const int customerId, const double amount );
        int getCustomerId();
        double getAmount();
        int getAccountId();

    private:
    	int customerId;
        int accountId;
    	double amount;
};

#endif 
