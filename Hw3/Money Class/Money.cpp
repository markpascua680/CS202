/* Jay-Mark Pascua
   CS 202
   02/25/2021
   Holds function definitions
*/
#include "Money.h"
#include <cmath>

std::ostream& operator <<(std::ostream& os, const Money& m) {
    if (m._dollars == 0 && m._cents == 0) {
        return os << "$0.00";
    }
    else if (m._dollars < 0) { // If dollars is negative, move negative sign outside dollar sign
        os << "-$" << m._dollars * -1;
    }
    else {
        os << "$" << m._dollars;
    }

    if (m._cents < 10) {
        return os << ".0" << m._cents;
    }
    else {
        return os << "." << m._cents;
    }
}

bool operator ==(const Money& m1, const Money& m2) {
    if (m1._dollars == m2._dollars && m1._cents == m2._cents)
        return true;
    return false;
}

bool operator !=(const Money& m1, const Money& m2) {
    if (m1._dollars != m2._dollars || m1._cents != m2._cents)
        return true;
    return false;
}

bool operator <(const Money& m1, const Money& m2) {
    if (m1._dollars < m2._dollars || m1._cents < m2._cents)
        return true;
    return false;
}

bool operator <=(const Money& m1, const Money& m2) {
    if (m1._dollars <= m2._dollars && m1._cents <= m2._cents)
        return true;
    return false;
}

bool operator >(const Money& m1, const Money& m2) {
    if (m1._dollars > m2._dollars || m1._cents > m2._cents)
        return true;
    return false;
}

bool operator >=(const Money& m1, const Money& m2) {
    if (m1._dollars >= m2._dollars && m1._cents >= m2._cents)
        return true;
    return false;
}

Money& Money::operator+=(const Money& m) {
    _dollars += m._dollars;

    if (_cents + m._cents > 100) { // Adds a dollar if cents add up over 100
        _dollars++;
        _cents = 100 - (_cents + m._cents);
        return *this;
    }
    else
        _cents += m._cents;
    return *this;
}

Money& Money::operator-=(const Money& m) {
    _dollars -= m._dollars;

    if (_cents < m._cents) { // Carries over a dollar if cents being subtracted from is smaller 
        _dollars -= 1;
        _cents += 100;
        _cents -= m._cents;
        return *this;
    }
    else
        _cents -= m._cents;
    return *this;
}

Money& Money::operator*=(const double& num) {
    double product = _dollars + (double(_cents) / 100); // Makes a double out of money object to do multiplication
    product *= num;

    _dollars = int(product);
    _cents = round((product - _dollars) * 100); // Get the decimal alone, then * 100 to make it an int, then round
    return *this;
}

Money& Money::operator/=(const double& num) {
    double quotient = _dollars + (double(_cents) / 100); // Makes a double out of money object to do division
    quotient /= num;

    _dollars = int(_dollars);
    _cents = round((quotient - _dollars) * 100); // Get the decimal alone, then * 100 to make it an int, then round
    return *this;
}

Money operator+(const Money& m1, const Money& m2) {
    Money sum;
    sum._dollars = m1._dollars + m2._dollars;

    if (m1._cents + m2._cents > 100) { // Adds a dollar if cents add up over 100
        sum._dollars++;
        sum._cents = 100 - (m1._cents + m2._cents);
        return sum;
    }
    else
        sum._cents = m1._cents + m2._cents;
    return sum;
}

Money operator-(const Money& m1, const Money& m2) {
    Money difference;
    difference._dollars = m1._dollars - m2._dollars;

    if (m1._cents < m2._cents) { // Carries over a dollar if cents being subtracted from is smaller 
        difference._dollars -= 1;
        difference._cents = m1._cents + 100;
        difference._cents = m1._cents - m2._cents;
        return difference;
    }
    else
        difference._cents = m1._cents - m2._cents;
    return difference;
}

Money operator*(const Money& m1, const double& num) {
    Money product = m1;
    product *= num;

    return product;
}

Money operator*(const double& num, const Money& m1) {
    Money product = m1;
    product *= num; 

    return product;
}

Money operator/(const Money& m1, const double& num) {
    Money quotient = m1;
    quotient /= num;

    return quotient;
}

Money operator/(const double& num, const Money& m1) {
    Money quotient = m1;
    quotient /= num;

    return quotient;
}

Money& Money::operator=(const Money& m1) {
    _dollars = m1._dollars;
    _cents = m1._cents;
    return *this;
}


Money::Money() {
    _dollars = 0;
    _cents = 0;
}

Money::Money(int dollars, int cents) {
    _dollars = dollars;
    _cents = cents;
}

Money::Money(double dollars) {
    _dollars = int(dollars);

    dollars = dollars - int(dollars); // Rounds cents up
    dollars *= 100;
    _cents = round(dollars);

    if (_cents < 0) { // Removes negative sign on cents
        _cents *= -1;
    }
}

Money::Money(int cents) {
    _dollars = 0;
    _cents = cents;
}

Money::~Money() {

}