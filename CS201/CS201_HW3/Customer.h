#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using std::string;
class Customer
{
    public:
		Customer();
        Customer( int customerId, string firstName, string lastName );
        int getCustomerId();
        void setCustomerId( int customerId );
		string getFirstName();
        void setFirstName( string firstName );
		string getLastName();
        void setLastName( string lastName );
		
    private:
    	int customerId;
    	string firstName;
		string lastName;
};

#endif 
