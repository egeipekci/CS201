	#include "Customer.h"

	Customer::Customer()	{
		customerId = -1;
    	firstName = " ";
		lastName = " ";	
	}
	
    Customer::Customer( int customerId, string firstName, string lastName )	{
    	this->customerId = customerId;
    	this->firstName = firstName;
		this->lastName = lastName;	
	}
	
    int Customer::getCustomerId()	{
    	return customerId;
	}
	
    void Customer::setCustomerId( int customerId )	{
    	this->customerId = customerId;
	}
	
	string Customer::getFirstName()	{
		return firstName;
	}
	
    void Customer::setFirstName( string firstName )	{
    	this->firstName = firstName;
	}
	
	string Customer::getLastName()	{
		return lastName;
	}
	
    void Customer::setLastName( string lastName )	{
    	this->lastName = lastName;
	}
		

