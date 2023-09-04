#include "pch.h"
#include "Fraction.h"
#include <iostream>


Fraction::Fraction()
{ 
	int numerator;
	int denominator;
}


Fraction::~Fraction()
{
}

Fraction Fraction::Sum(const Fraction b)
{
	Fraction sumFraction;
	sumFraction.numerator = (numerator*b.denominator + b.numerator * denominator);
	sumFraction.denominator = denominator* b.denominator;
	return sumFraction;
}
Fraction Fraction::Sub(const Fraction b)
{
	Fraction subFraction;
	subFraction.numerator = (numerator*b.denominator - b.numerator * denominator);
	subFraction.denominator = denominator * b.denominator;
	return subFraction;
}

void Fraction::Print()
{
	std::cout << numerator << '/' << denominator;
}
