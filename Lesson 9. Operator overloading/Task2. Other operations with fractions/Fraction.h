#pragma once

class Fraction
{
private:
	int numerator_;
	int denominator_;

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
};
