#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
    switch (denominator)
    {
    case 0:
        break;
    }
    m_numerator = numerator;
    m_denominator = denominator;
    simplyfy();
}

void Fraction::Cout()
{
    cout << m_numerator << "/" << m_denominator << endl;
}

Fraction Fraction::add(const Fraction& other) const
{
    int numerator = m_numerator * other.m_denominator + other.m_numerator * m_denominator;
    int denominator = m_denominator * other.m_denominator;
    return Fraction(numerator, denominator);
}

Fraction Fraction::substract(const Fraction& other) const
{
    int numerator = m_numerator * other.m_denominator - other.m_numerator * m_denominator;
    int denominator = m_denominator * other.m_denominator;
    return Fraction(numerator, denominator);
}

Fraction Fraction::multiply(const Fraction& other) const
{
    int numerator = m_numerator * other.m_numerator;
    int denominator = m_denominator * other.m_denominator;
    return Fraction(numerator, denominator);
}

Fraction Fraction::devide(const Fraction& other) const
{
    switch (other.m_numerator)
    {
    case 0:
        break;
    }
    int numerator = m_numerator * other.m_denominator;
    int denominator = m_denominator * other.m_numerator;
    
    return Fraction(numerator, denominator);
}
void Fraction::simplyfy() {
    int a = m_numerator;
    int b = m_denominator;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int commonDivisor = a;
    m_numerator /= commonDivisor;
    m_denominator /= commonDivisor;
    if (m_denominator < 0) {
        m_numerator = -m_numerator;
        m_denominator = -m_denominator;
    }
}
