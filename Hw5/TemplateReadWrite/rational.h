#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

template <typename T>
class Rational {
    friend std::ostream& operator<<(std::ostream&, const Rational& rhs);
    friend Rational operator+(const Rational& lhs, const Rational& rhs);
public:
    template <typename U>
    Rational<T>(U num, U den) : _numerator(num), _denominator(den) {
    }

    Rational& operator+=(const Rational& rhs);
private:
    int _numerator;
    int _denominator;
};

#endif // !RATIONAL_H
