#pragma once
class Fraction
{
public:
	Fraction Sum( const Fraction b);
	Fraction Sub(const Fraction b);
	void Print();
	int numerator;
	int denominator;

	Fraction();
	~Fraction();
};

