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