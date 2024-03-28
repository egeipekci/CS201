#ifndef BANKINGSYSTEM_H
#define BANKINGSYSTEM_H
#include <iostream>
#include <string>
#include "LinkedList.h"
#include "LinkedList2.h"
#include "Account.h"
#include "Customer.h"
using std::string;
using namespace std;

class BankingSystem {
public :
    BankingSystem ();
    ~ BankingSystem ();
    void addCustomer ( const int customerId , const string firstName , const
    string lastName );
    void deleteCustomer ( const int customerId );
    int addAccount ( const int customerId , const double amount );
    void deleteAccount ( const int accountId );
    void showAllAccounts ();
    void showAllCustomers ();
    void showCustomer ( const int customerId );

private:
    LinkedList Accounts;
    int accountSize;
    LinkedList2 customers;
    int customerSize;
    bool isNameUnique( string firstName, string lastName );
    bool isLastNameUnique( string lastName );
    bool isCustomerIdUnique( int customerId );
    bool hasAccount( int customerId );
    string getCustomerName( int customerId );
};

#endif
