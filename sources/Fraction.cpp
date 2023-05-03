#include <iostream>
#include <algorithm>
#include <cmath>

#include "Fraction.hpp"

namespace ariel
{
    Fraction::Fraction(float esroni)
    {
        this->denominator = 1;
        this->numerator = esroni;
    }

    Fraction::Fraction(int numerator, int denominator)
    {
        if (denominator == 0)
        {
            throw std ::invalid_argument("fraction with denominator = 0 is not defined");
        }
        this->denominator = denominator;
        this->numerator = numerator;
    }

    Fraction::Fraction()
    {
        this->denominator = 1;
        this->numerator = 1;
    }

    int Fraction::getDenominator() const
    {
        return this->denominator;
    }

    void Fraction::setDenominator(int denominator)
    {
        this->denominator = denominator;
    }

    int Fraction::getNumerator() const
    {
        return this->numerator;
    }

    void Fraction::setNumerator(int numerator)
    {
        this->numerator = numerator;
    }

    Fraction Fraction::operator+(Fraction &other)
    {
        return Fraction(1, 1);
    }

    Fraction Fraction::operator-(Fraction &other)
    {
        return Fraction(1, 1);
    }

    Fraction Fraction::operator/(Fraction &other)
    {
        return Fraction(1, 1);
    }

    Fraction Fraction::operator*(Fraction &other)
    {
        return Fraction(1, 1);
    }

    Fraction Fraction::operator++(int)
    {
        return *this;
    }

    Fraction Fraction::operator--(int)
    {
        return *this;
    }

    Fraction &Fraction::operator++()
    {
        return *this;
    }

    Fraction &Fraction::operator--()
    {
        return *this;
    }

    bool Fraction::operator!=(const Fraction &other) const
    {
        return true;
    }

    bool Fraction::operator==(const Fraction &other) const
    {
        return true;
    }

    bool Fraction::operator<=(const Fraction &other) const
    {
        return true;
    }

    bool Fraction::operator>=(const Fraction &other) const
    {
        return true;
    }

    bool Fraction::operator<(const Fraction &other) const
    {
        return true;
    }

    bool Fraction::operator>(const Fraction &other) const
    {
        return true;
    }

     float Fraction::operator+(float esroni)
    {
        return 1.1;
    }

    float Fraction::operator-(float esroni)
    {
        return 1.1;
    }

    float Fraction::operator*(float esroni)
    {
        return 1.1;
    }

    float Fraction::operator/(float esroni)
    {
        return 1.1;
    }

    Fraction operator+(float esroni, const Fraction &frac)
    {
        return Fraction(1, 1);
    }

    Fraction operator-(float esroni, const Fraction &frac)
    {
        return Fraction(1, 1);
    }

    Fraction operator*(float esroni, const Fraction &frac)
    {
        return Fraction(1, 1);
    }

    Fraction operator/(float esroni, const Fraction &frac)
    {
        return Fraction(1, 1);
    }

    bool operator==(float esroni, const Fraction &frac)
    {
        return true;
    }

    bool operator!=(float esroni, const Fraction &frac)
    {
        return true;
    }

    bool operator<=(float esroni, const Fraction &frac)
    {
        return true;
    }

    bool operator>=(float esroni, const Fraction &frac)
    {
        return true;
    }

    bool operator<(float esroni, const Fraction &frac)
    {
        return true;
    }

    bool operator>(float esroni, const Fraction &frac) 
    {
        return true;
    }

    std::ostream &operator<<(std::ostream &stream, const Fraction &fraction)
    {
        return stream;
    }
    
    std::istream &operator>>(std::istream &stream, const Fraction &fraction)
    {
        return stream;
    }

}
