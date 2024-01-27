#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	};
	bool Fraction::operator == (Fraction other) { return numerator_ * other.denominator_ == denominator_ * other.numerator_; }
	bool Fraction::operator != (Fraction other) { return !(*this == other); }
	bool Fraction::operator < (Fraction other) { return numerator_ * other.denominator_ < denominator_ * other.numerator_; }
	bool Fraction::operator > (Fraction other) { return  other < *this; }
	bool Fraction::operator <= (Fraction other) { return !(*this > other); }
	bool Fraction::operator >= (Fraction other) { return !(*this < other); }