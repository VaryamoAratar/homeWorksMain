#pragma once
#include<iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;
	int nod(int numerator, int denominator);

public:
	int get_numerator();
	int get_denominator();
	Fraction(int numerator, int denominator);
	bool operator == (Fraction other);
	bool operator != (Fraction other);
	bool operator < (Fraction other);
	bool operator > (Fraction other);
	bool operator <= (Fraction other);
	bool operator >= (Fraction other);
	Fraction operator + (Fraction other);
	Fraction operator - (Fraction other);
	Fraction operator * (Fraction other);
	Fraction operator / (Fraction other);
	Fraction operator - ();
	Fraction operator++();
	Fraction operator++(int);
	Fraction operator--();
	Fraction operator--(int);

	friend std::ostream& operator << (std::ostream&, const Fraction& f);
};
