/*
    -> A classs can be derived by inheriting the properties of two or more base classes.
    -> Multiple Inheritance refers to the derivation of a class from several base classes. 
*/

#include<bits/stdc++.h>
using namespace std;

class Account{
    protected:
        int accountNum;
        double balance;
    
    public:
        Account(int acct, double bal){
            accountNum = acct;
            balance = bal;
        }
        void displayAccount(){
            cout << "Account - " << accountNum << " contain Rs. " << balance << endl;
        }
};

class Customer{
    protected:
        int custID;
        string custName;
    
    public:
        Customer(int id, string name){
            custID = id;
            custName = name;
        }
        void displayCustomer(){
            cout << "Customer: " << custID << " " << custName << endl;
        }
};

class CustomerAccount : public Account, public Customer{ // syntax when multiple Inheritance is done.
    public:
        CustomerAccount(int acct, double bal, int id, string name) : Account(acct, bal), Customer(id, name){
            /*
            -> Here 1st two args are for "Account" and last two are for "Customer"
            -> here we are jsut passing the values to the constructors for the initializaation of the values of both the base classes.
            */
        }
};

int main(){
    CustomerAccount c1(20045, 10000, 1001, "Subham Prasad Das");
    c1.displayAccount();
    c1.displayCustomer();
    return 0;
}

/*
    Made two classes Account and Customer. Made a class CustomerAccount which is derieved from prev two classes.
    This is the condition when the term "Multiple Inheritence" is fulfilled as the class "CustomerAccount" is derieved from both "Account" and "Customer".
*/