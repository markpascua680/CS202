#include "rational.h"

template <typename T>
std::ostream& operator<<(std::ostream& os, const Rational<T>& rhs) {
    return os << rhs._numerator << "/" << rhs._denominator;
}

template <typename T>
Rational<T> operator+(const Rational<T>& lhs, const Rational<T>& rhs) {
    //a/b + c/d = (ad+bc)/ad
    return Rational<T>(lhs._numerator * rhs._denominator + rhs._numerator * lhs._denominator, lhs._denominator * rhs._denominator);
}

template <typename T>
Rational<T>& Rational<T>::operator+=(const Rational<T>& rhs) {
    _numerator = _numerator * rhs._denominator + rhs._numerator * _denominator;
    _denominator *= rhs._denominator;
    return *this;
}

template <typename T>
Rational<T>& Rational<T>::operator-=(const Rational<T>& rhs) {
    _numerator = _numerator * rhs._denominator - rhs._numerator * _denominator;
    _denominator *= rhs._denominator;
    return *this;
}

template <typename T>
Rational<T>& Rational<T>::operator*=(const Rational<T>& rhs) {
    _numerator *= rhs._numerator;
    _denominator *= rhs._denominator;
    return *this;
}

template <typename T>
Rational<T>& Rational<T>::operator/=(const Rational<T>& rhs) {
    _numerator *= rhs._denominator;
    _denominator *= rhs._numerator;
    return *this;
}

template <typename T>
bool Rational<T>::operator==(const Rational<T>& rhs) {
    if (_numerator == rhs._numerator && _denominator == rhs._denominator)
        return true;
    return false;
}
