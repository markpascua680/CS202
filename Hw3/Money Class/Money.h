/* Jay-Mark Pascua
   CS 202
   02/25/2021
   Holds class and function declarations
*/

#ifndef MONEY_HPP
#define MONEY_HPP
#include <sstream> 
#include <iostream>

class Money {

	friend std::ostream& operator <<(std::ostream& os, const Money& m);
	friend bool operator ==(const Money& m1, const Money& m2);
	friend bool operator !=(const Money& m1, const Money& m2);
	friend bool operator <(const Money& m1, const Money& m2);
	friend bool operator <=(const Money& m1, const Money& m2);
	friend bool operator >(const Money& m1, const Money& m2);
	friend bool operator >=(const Money& m1, const Money& m2);

	
public:
	Money();
	Money(int dollars, int cents);
	Money(double dollars);
	Money(int cents);
	~Money();

	int getDollars() {
		return _dollars;
	}

	int getCents() {
		return _cents;
	}

private:
	int _dollars;
	int _cents;
};



#endif // !Money_HPP
