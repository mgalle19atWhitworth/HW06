#ifndef TRANSACTION_H_
#define TRANSACTION_H_
#include <string>
#include <sstream>

/**
Keeps a record for each transaction performed
*/
	
class Transaction 
{
private:
	double amount;
	std::string fees;
	
public:
	std::string customer_number;
	std::string transaction_type;
	Transaction(int customer_number, std::string type, double amt, std::string fees)
	{
		this->customer_number = customer_number;
		this->transaction_type = type;
		this->amount = amt;
		this->fees = fees;
	}

	std::string process_tran()
	{
		std::stringstream ss;
		ss << "Transaction: " << transaction_type << " Amount: " << amount << " " << fees;
		return ss.str();
	}
};
#endif