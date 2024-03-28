#include <iostream>
#include "BankingSystem.h" 

int main() {

BankingSystem B;

B. addCustomer ( 1234 , " Ayla ", " Kaya " );
B.showAllCustomers();
B. addCustomer ( 4567 , " Kemal ", "Say" );
B.showAllCustomers();
B. addCustomer ( 891234 , "Serhan ", "Yilmaz " );
B.showAllCustomers();
B. addCustomer ( 891234 , " Fatih ", " Soylu " );
B.showAllCustomers();
B. addCustomer ( 5678 , " Nedim ", " Acar " );
B.showAllCustomers();
B. addCustomer ( 8901 , " Ayla ", " Akar " );
B.showAllCustomers();
B. addCustomer ( 9876 , " Ayla ", " Akar " );
B.showAllCustomers();
B. deleteCustomer ( 5678 );
B. deleteCustomer ( 1267 );

int X, Y, Z, Q;

cout << endl;

B. addAccount ( 4567 , 100.00 );
X = B. addAccount ( 1234 , 200.00 );
Y = B. addAccount ( 4567 , 300.00 );
B. addAccount ( 4567 , 1000.00 );
Z = B. addAccount ( 8901 , 100.00 );
B. addAccount ( 5678 , 100.00 );
B. addAccount ( 1234 , 500.00 );
B. deleteAccount ( X );
B. deleteAccount ( Y );
B. deleteAccount ( Z );
B. addAccount ( 891234 , 500.00 );
B. addAccount ( 4567 , 200.00 );
B. addAccount ( 1234 , 1500.00 );
Q = B. addAccount ( 1234 , 300.00 );
B. deleteAccount ( Q );

cout << endl;

B. showAllAccounts ();
B. showAllCustomers ();

cout << endl;

B. showCustomer ( 8901 );

cout << endl;

B. showCustomer ( 4567 );

cout << endl;

B. showCustomer ( 1212 );
return 0;

}
