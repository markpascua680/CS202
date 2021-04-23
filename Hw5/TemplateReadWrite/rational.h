#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

template <typename T>
class Rational {
    friend std::ostream& operator<<(std::ostream&, const Rational<T>& rhs);

    template <typename U>
    friend Rational<U> operator+(const Rational<U>& lhs, const Rational<U>& rhs);

    template <typename U>
    friend Rational<U> operator-(const Rational<U>& lhs, const Rational<U>& rhs);

    template <typename U>
    friend Rational<U> operator*(const Rational<U>& lhs, const Rational<U>& rhs);

    template <typename U>
    friend Rational<U> operator/(const Rational<U>& lhs, const Rational<U>& rhs);

public:
    Rational<T>() : _numerator(0), _denominator(0) {}
        template <typename U>
    Rational<T>(U num) : _numerator(num) {
    }
        template <typename U>
    Rational<T>(U num, U den) : _numerator(num), _denominator(den) {
    }

    Rational<T>& operator+=(const Rational<T>& rhs);
    Rational<T>& operator-=(const Rational<T>& rhs);
    Rational<T>& operator*=(const Rational<T>& rhs);
    Rational<T>& operator/=(const Rational<T>& rhs);
    bool operator==(const Rational<T>& rhs);
private:
    int _numerator;
    int _denominator;
};

#endif // !RATIONAL_H
