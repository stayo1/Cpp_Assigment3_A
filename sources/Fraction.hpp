#pragma once
#include <iostream>
using namespace std;

namespace ariel
{
    class Fraction
    {
    private:
        int denominator;
        int numerator;

    public:
        Fraction(float esroni);
        Fraction(int denominator, int numerator);
        Fraction();

        int getNumerator() const;
        void setNumerator(int numerator);
        int getDenominator() const;
        void setDenominator(int denumerator);

        Fraction operator+(Fraction &other);
        Fraction operator-(Fraction &other);
        Fraction operator/(Fraction &other);
        Fraction operator*(Fraction &other);
        Fraction operator++(int);
        Fraction operator--(int);
        Fraction &operator++();
        Fraction &operator--();

        bool operator==(const Fraction &other) const;
        bool operator!=(const Fraction &other) const;
        bool operator<=(const Fraction &other) const;
        bool operator>=(const Fraction &other) const;
        bool operator<(const Fraction &other) const;
        bool operator>(const Fraction &other) const;

        float operator+(float esroni);
        float operator-(float esroni);
        float operator*(float esroni);
        float operator/(float esroni);

        friend Fraction operator+(float esroni, const Fraction &frac);
        friend Fraction operator-(float esroni, const Fraction &frac);
        friend Fraction operator*(float esroni, const Fraction &frac);
        friend Fraction operator/(float esroni, const Fraction &frac);

        friend bool operator==(float esroni, const Fraction &frac);
        friend bool operator!=(float esroni, const Fraction &frac);
        friend bool operator<=(float esroni, const Fraction &frac);
        friend bool operator>=(float esroni, const Fraction &frac);
        friend bool operator<(float esroni, const Fraction &frac);
        friend bool operator>(float esroni, const Fraction &frac);

        friend std::ostream &operator<<(std::ostream &stream, const Fraction &fraction);
        friend std::istream &operator>>(std::istream &stream, const Fraction &fraction);
    };
};