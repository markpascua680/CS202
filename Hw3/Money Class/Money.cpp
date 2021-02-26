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

Money & Money::operator-=(const Money& m) {
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