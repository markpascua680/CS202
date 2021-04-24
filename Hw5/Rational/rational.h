#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

template <typename T>
class Rational {
    template <typename T>
    friend std::ostream& operator<<(std::ostream& os, const Rational<T>& rhs);

    template <typename U>
    friend Rational<U> operator+(const Rational<U>& lhs, const Rational<U>& rhs);

    template <typename U>
    friend Rational<U> operator-(const Rational<U>& lhs, const Rational<U>& rhs);

    template <typename U>
    friend Rational<U> operator-(const Rational<U>& rhs);

    template <typename U>
    friend Rational<U> operator*(const Rational<U>& lhs, const Rational<U>& rhs);

    template <typename U>
    friend Rational<U> operator/(const Rational<U>& lhs, const Rational<U>& rhs);

    template <typename U>
    friend bool operator<(const Rational<U>& lhs, const Rational<U>& rhs);

    template <typename U>
    friend bool operator>(const Rational<U>& lhs, const Rational<U>& rhs);

    template <typename U>
    friend bool operator<=(const Rational<U>& lhs, const Rational<U>& rhs);

    template <typename U>
    friend bool operator>=(const Rational<U>& lhs, const Rational<U>& rhs);

    template <typename U>
    friend bool operator!=(const Rational<U>& lhs, const Rational<U>& rhs);

    template <typename U>
    friend bool operator==(const Rational<U>& lhs, const Rational<U>& rhs);

public:
    Rational() : _numerator(0), _denominator(1) {}
    Rational(T num) : _numerator(num), _denominator(1) {}
    Rational(T num, T den) : _numerator(num), _denominator(den) {}

    Rational& operator+=(const Rational<T>& rhs);
    Rational& operator-=(const Rational<T>& rhs);
    Rational& operator*=(const Rational<T>& rhs);
    Rational& operator/=(const Rational<T>& rhs);

    void simplify(Rational<T>& r);
private:
    T _numerator;
    T _denominator;
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const Rational<T>& rhs) {
    if (rhs._numerator == 0)
        return os << 0;
    return os << rhs._numerator << "/" << rhs._denominator;
}

template <typename T>
Rational<T> operator+(const Rational<T>& lhs, const Rational<T>& rhs) {
    //a/b + c/d = (ad+bc)/ad
    return Rational<T>(lhs._numerator * rhs._denominator + rhs._numerator * lhs._denominator, lhs._denominator * rhs._denominator);
}

template <typename T>
Rational<T> operator-(const Rational<T>& lhs, const Rational<T>& rhs) {
    return Rational<T>(lhs._numerator * rhs._denominator - rhs._numerator * lhs._denominator, lhs._denominator * rhs._denominator);
}

template <typename T>
Rational<T> operator-(const Rational<T>& rhs) {
    return Rational<T>(-rhs._numerator, rhs._denominator);
}

template <typename T>
Rational<T> operator*(const Rational<T>& lhs, const Rational<T>& rhs) {
    return Rational<T>(lhs._numerator * rhs._numerator, lhs._denominator * rhs._denominator);
}

template <typename T>
Rational<T> operator/(const Rational<T>& lhs, const Rational<T>& rhs) {
    return Rational<T>(lhs._numerator * rhs._denominator, lhs._denominator * rhs._numerator);
}

template <typename T>
bool operator<(const Rational<T>& lhs, const Rational<T>& rhs) {
    if (lhs._numerator * rhs._denominator < rhs._numerator * lhs._denominator)
        return true;
    return false;
}

template <typename T>
bool operator>(const Rational<T>& lhs, const Rational<T>& rhs) {
    if (lhs._numerator / lhs._denominator > rhs._numerator / rhs._denominator)
        return true;
    return false;
}

template <typename T>
bool operator<=(const Rational<T>& lhs, const Rational<T>& rhs) {
    if (lhs._numerator / lhs._denominator <= rhs._numerator / rhs._denominator)
        return true;
    return false;
}

template <typename T>
bool operator>=(const Rational<T>& lhs, const Rational<T>& rhs) {
    if (lhs._numerator / lhs._denominator >= rhs._numerator / rhs._denominator)
        return true;
    return false;
}

template <typename T>
bool operator!=(const Rational<T>& lhs, const Rational<T>& rhs) {
    if (lhs._numerator != rhs._numerator && lhs._denominator != rhs._denominator)
        return true;
    return false;
}

template <typename T>
bool operator==(const Rational<T>& lhs, const Rational<T>& rhs) {
    if (lhs._numerator == rhs._numerator && lhs._denominator == rhs._denominator)
        return true;
    return false;
}

template <typename T>
Rational<T>& Rational<T>::operator+=(const Rational<T>& rhs) {
    _numerator = _numerator * rhs._denominator + rhs._numerator * _denominator;
    _denominator *= rhs._denominator;
    simplify(*this);
    return *this;
}

template <typename T>
Rational<T>& Rational<T>::operator-=(const Rational<T>& rhs) {
    _numerator = _numerator * rhs._denominator - rhs._numerator * _denominator;
    _denominator *= rhs._denominator;
    simplify(*this);
    return *this;
}

template <typename T>
Rational<T>& Rational<T>::operator*=(const Rational<T>& rhs) {
    _numerator *= rhs._numerator;
    _denominator *= rhs._denominator;
    simplify(*this);
    return *this;
}

template <typename T>
Rational<T>& Rational<T>::operator/=(const Rational<T>& rhs) {
    _numerator *= rhs._denominator;
    _denominator *= rhs._numerator;
    simplify(*this);
    return *this;
}

template <typename T>
void Rational<T>::simplify(Rational<T>& r) {
    while (r._numerator % 2 == 0 && r._denominator % 2 == 0) {
        r._numerator /= 2;
        r._denominator /= 2;
    }
    if (r._denominator % r._numerator == 0) {
        r._denominator /= r._numerator;
        r._numerator = 1;
    }
}

#endif // !RATIONAL_H