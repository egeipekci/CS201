	
	#include "BankingSystem.h"

	BankingSystem::BankingSystem ()	{
		customerSize = 0;
		accountSize = 0;
	}
	
	BankingSystem::~ BankingSystem ()	{
		/* delete customers;
		delete Accounts;*/	
	}
	
	void BankingSystem::addCustomer ( const int customerId , const string firstName , const string lastName )	{
		if( customerSize == 0 )	{
			customers.insert( customerSize + 1, Customer( customerId, firstName, lastName ) );
			cout<< "Customer " << customerId << " has been added"  << endl;
			customerSize++;
			return;
		}
		
		else{
			if( !isNameUnique( firstName, lastName ) )	{
				cout << "Customer " << firstName << lastName << " already exists" << endl;
				return;
			}

			else {
				if( !isCustomerIdUnique( customerId ) )	{
					cout << "Customer " << customerId << " already exists" << endl;
					return;
				}

				Customer dataItem;
					customers.retrieve( customerSize, dataItem );
					if( lastName.compare( dataItem.getLastName() ) > 0 )	{
						customerSize++;
						customers.insert( customerSize, Customer( customerId, firstName, lastName ) );
						cout<< "Customer " << customerId << " has been added"  << endl;
					return;	
					}
				 for( int i = 1; i <= customerSize; i++ )	{
					customers.retrieve( i, dataItem );
					if( lastName.compare( dataItem.getLastName() ) < 0 )	{
						customers.insert( i, Customer( customerId, firstName, lastName ) );
						customerSize++;
						cout<< "Customer " << customerId << " has been added"  << endl;
						return;						
					}
					
					else if(  lastName.compare(dataItem.getLastName() ) == 0 )	{
						if( firstName < dataItem.getFirstName() )	{
							customers.insert( i, Customer( customerId, firstName, lastName ) );
							customerSize++;
							cout<< "Customer " << customerId << " has been added"  << endl;
							return;	
						}
					}
				 }
			}

			
		
		
		}	

		
	
	}
	
	void BankingSystem::deleteCustomer ( const int customerId )	{
		Customer dataItem;
		for( int i = 1; i <= customerSize; i++ )	{
			if( customers.retrieve( i, dataItem ) ) 	{
				if( dataItem.getCustomerId() == customerId )	{
					customers.remove( i );
					cout << "Customer " << customerId << " has been deleted" << endl;
					customerSize--;
					Account item;
					for( int k = 1; k <= accountSize; k++ )	{
						Accounts.retrieve( k, item );
						if( item.getCustomerId() == customerId )	{
							Accounts.remove( k );
						
							accountSize--;	
						}
					}
					return;
				}
			}
		}

		cout << "Customer " << customerId << " does not exist" << endl; 
	}
	
	// bunu düzenle
	int BankingSystem::addAccount ( const int customerId , const double amount )	{
	

		Account dataItem;
		if( accountSize == 0 )	{
			Accounts.insert( 1, Account( customerId, amount ) );
			Accounts.retrieve( 1, dataItem );
			cout << "Account " << dataItem.getAccountId() << " added for customer " << dataItem.getCustomerId() << endl;
			accountSize++;
			return dataItem.getAccountId();
		}
		else{
			if( isCustomerIdUnique( customerId ) )	{
				cout << "Customer " << customerId << " does not exist" << endl;
				return -1;		 
			}
			accountSize++;
			Accounts.insert( accountSize, Account( customerId, amount ) );
			Accounts.retrieve( accountSize, dataItem );
			cout << "Account " << dataItem.getAccountId() << " added for customer " << dataItem.getCustomerId() << endl;
			return dataItem.getAccountId();
		}
		
	}
	
	void BankingSystem::deleteAccount ( const int accountId )	{
		Account dataItem;
		for( int i = 1; i <= accountSize; i++ )	{
			if( Accounts.retrieve( i, dataItem ) ) 	{
				if( dataItem.getAccountId() == accountId )	{
					Accounts.remove ( i );
					cout<< "Account " << accountId << " has been deleted" << endl;
					accountSize--;
					return;
				}
					
			}
		}
		cout << "Account doesn't exist" << endl; 
	}
	
	void BankingSystem::showAllAccounts ()	{
		Account dataItem;
		cout << "Account id 	Customer id 	Customer name 	Balance" << endl;
		for( int i = 1; i <= accountSize; i++ )	{
				
			if( Accounts.retrieve( i, dataItem ) )	{
				cout << dataItem.getAccountId() << "		" << dataItem.getCustomerId() << "	       " << getCustomerName( dataItem.getCustomerId() ) << "	" << dataItem.getAmount() << endl; 
			}

		}
		
	}
	
	void BankingSystem::showAllCustomers ()	{
		Customer dataItem;
		cout << "Customer id	 Customer name" << endl; 
		for( int i = 1; i <= customerSize; i++ )	{
			if( customers.retrieve( i, dataItem ) )	{
				cout << dataItem.getCustomerId() << "		" << dataItem.getFirstName() << dataItem.getLastName() << endl; 
			}
		}
	}
	
	void BankingSystem::showCustomer ( const int customerId )	{
			Customer dataItem;
		for( int i = 1; i <= customerSize; i++ )	{
			if( customers.retrieve( i, dataItem ) )	{
				if( dataItem.getCustomerId() == customerId )	{
					
					cout << "Customer id: " << dataItem.getCustomerId() << " Customer name: " << dataItem.getFirstName() << " " << dataItem.getLastName() << endl;
					if( hasAccount( customerId ) )	{
						Account dataItem;
						cout << "Accounts of this customer:\n" <<
								"Account id  Balance" << endl;
									
						for( int i = 1; i <= accountSize; i++ )	{
							Accounts.retrieve( i, dataItem );
							if( dataItem.getCustomerId() == customerId )	{
								cout << dataItem.getAccountId() << "		" << dataItem.getAmount() << endl;
							}
		}
					

					}
					return;
				} 
			}
		}
		cout << "Customer " << customerId << " does not exist " << endl;
	}

	bool BankingSystem::isNameUnique( string firstName, string lastName )	{
		Customer dataItem;
		for( int i = 1; i <= customerSize; i++ )	{
			customers.retrieve( i, dataItem );
			if( dataItem.getFirstName() == firstName && dataItem.getLastName() == lastName )	{
				return false;
			}
		}
		return true;
	}

    bool BankingSystem::isLastNameUnique( string lastName )	{
		Customer dataItem;
		for( int i = 1; i <= customerSize; i++ )	{
			customers.retrieve( i, dataItem );
			if( dataItem.getLastName() == lastName )	{
				return false;
			}
		}
		return true;
	}

	  bool BankingSystem::isCustomerIdUnique( int customerId )	{
		Customer dataItem;
		for( int i = 1; i <= customerSize; i++ )	{
			customers.retrieve( i, dataItem );
			if( dataItem.getCustomerId() == customerId )	{
				return false;
			}
		}
		
		return true;
	}

	bool BankingSystem::hasAccount( int customerId )	{
		Account dataItem;
		for( int i = 1; i <= accountSize; i++ )	{
			Accounts.retrieve( i, dataItem );
			if( dataItem.getCustomerId() == customerId )	{
				return true;
			}
		}

		return false;
	}

	string BankingSystem::getCustomerName( int customerId )	{
		Customer dataItem;

		for( int i = 1; i <= customerSize; i++ )	{
			if( customers.retrieve( i, dataItem ) )	{
				if( dataItem.getCustomerId() == customerId )	{
					return dataItem.getFirstName() + " " + dataItem.getLastName();
				}
			}
		}
		return "	";
	}
