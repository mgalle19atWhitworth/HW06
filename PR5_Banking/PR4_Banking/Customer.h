#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>
/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
protected:
	std::string  name;
	std::string address;
	int age;
	int telephonenumber;
public:
	// gets and sets the name and address of the customer
	std::string getName() { return name; };
	std::string setName(std::string newName) { name = newName; }
	std::string getAddress() { return address; };
	std::string setAddress(std::string newAddress) { address=newAddress; }
	
	//constuctor
	Customer(string name1, string address1, int age1, int telephonenumber1)
	{
		name = name1;
		address = address1;
		age = age1;
		telephonenumber = telephonenumber1;
	}

	virtual double Savings_Interest()const = 0;
	virtual double check_interest()const = 0;
	virtual double check_charge() const = 0;
	virtual double overdraft_penalty()const = 0;
};
class Senior : public Customer
{
public:
	Senior(std::string name1, std::string address1, int age1, int telephoneNumber) :Customer(name1, address1, age1,telephoneNumber) {}
	double Savings_interest() {
		double interest = 2.5;	// makes the interest different for a senior
		return interest;
	}
	double check_interest() {
		double interest = 2.5;	// makes the interest different for a senior
		return interest;
	}
	double check_charge() {
		double charge = 5;	// makes the charge different for a senior
		return charge;
	}
	double overdraft_penalty()
	{
		double penalty = 10; // makes the charge different for a senior
		return penalty;
	}
};
class Adult : public Customer
{
public:
	Adult (std::string name1, std::string address1, int age1, int telephoneNumber) :Customer(name1, address1, age1,telephoneNumber) {}
	double Savings_interest() {
		double interest = 2;		// makes the interest different for a adult
		return interest;
	}
	double check_interest() {
		double interest = 2; // makes the interest different for a adult
		return interest;
	}
	double check_charge() {
		double charge = 10; // makes the charge different for a adult
		return charge;
	}
	double overdraft_penalty()
	{
		double penalty = 15; // makes the charge different for a adult
		return penalty;
	}
};
class Student : public Customer
{
public:
	Student(std::string name1, std::string address1, int age1, int telephoneNumber) :Customer(name1, address1, age1,telephoneNumber) {}
	double Savings_interest() {
		double interest = 1.5; // makes the interest different for a student
		return interest;
	}
	double check_interest() {
		double interest = 1.5; // makes the interest different for a student
		return interest;
	}
	double check_charge() {
		double charge = 8;	// makes the charge different for a student
		return charge;
	}
	double overdraft_penalty()
	{
		double penalty = 12;	// makes the charge different for a student
		return penalty;
	}
};

#endif