#pragma once
#include <iostream>
using namespace std;

class Fraction
{
	int m_numerator;
	int m_denominator;

public:
	Fraction(int numerator, int denominator);
	void Cout();
	Fraction add(const Fraction& other) const;
	Fraction substract(const Fraction& other) const;
	Fraction multiply(const Fraction& other) const;
	Fraction devide(const Fraction& other) const;
	void simplyfy();
};
