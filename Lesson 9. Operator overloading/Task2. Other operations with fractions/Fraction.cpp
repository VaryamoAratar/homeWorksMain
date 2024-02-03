#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

int Fraction::get_numerator() {	return numerator_;}
int Fraction::get_denominator() { return denominator_; }

	bool Fraction::operator == (Fraction other) { return numerator_ * other.denominator_ == denominator_ * other.numerator_; }
	bool Fraction::operator != (Fraction other) { return !(*this == other); }
	bool Fraction::operator < (Fraction other) { return numerator_ * other.denominator_ < denominator_ * other.numerator_; }
	bool Fraction::operator > (Fraction other) { return  other < *this; }
	bool Fraction::operator <= (Fraction other) { return !(*this > other); }
	bool Fraction::operator >= (Fraction other) { return !(*this < other); }
	Fraction Fraction::operator + (Fraction other)
	{
		int num_ = numerator_ * other.denominator_ + other.numerator_ * denominator_;
		int	denom_ = denominator_ * other.denominator_;

		num_ = num_ / nod(num_, denom_);
		denom_ = denom_ / nod(num_, denom_);

		return Fraction(num_, denom_);
	}
	Fraction Fraction::operator - (Fraction other)
	{
		int num_ = numerator_ * other.denominator_ - other.numerator_ * denominator_;
		int	denom_ = denominator_ * other.denominator_;

		num_ = num_ / nod(num_, denom_);
		denom_ = denom_ / nod(num_, denom_);

		return Fraction(num_, denom_);

	}
	Fraction Fraction::operator * (Fraction other)
	{
		int num_ = numerator_ * other.numerator_ ;
		int	denom_ = denominator_ * other.denominator_;

		num_ = num_ / nod(num_, denom_);
		denom_ = denom_ / nod(num_, denom_);

		return Fraction(num_, denom_);
	}
	Fraction Fraction::operator / (Fraction other)
	{
		int num_ = numerator_ * other.denominator_ ;
		int	denom_ = denominator_ * other.numerator_;

		num_ = num_ / nod(num_, denom_);
		denom_ = denom_ / nod(num_, denom_);

		return Fraction(num_, denom_);
	}
	Fraction Fraction::operator - ()
	{
		int num_ = - numerator_;
		int	denom_ = denominator_;

		num_ = num_ / nod(num_, denom_);
		denom_ = denom_ / nod(num_, denom_);

		return Fraction(num_, denom_);
	}

	Fraction Fraction::operator ++ ()
	{
		numerator_ = numerator_ + denominator_;
		denominator_ = denominator_;
		return *this;
	}
	Fraction Fraction::operator++(int)
	{
		Fraction temp = *this;
		++(*this);
		return temp;
	}
	Fraction Fraction::operator -- ()
	{
		numerator_ = numerator_ - denominator_;
		return *this;
	}
	Fraction Fraction::operator --(int)
	{
		Fraction temp = *this;
		--(*this);
		return temp;
	}

	int Fraction::nod (int numerator, int denominator) //Наименьший общий делитель
	{
		numerator = abs(numerator);
		denominator = abs(denominator);

		while (numerator > 0 && denominator > 0)

			if (numerator > denominator)
				numerator %= denominator;

			else
				denominator %= numerator;

		return numerator + denominator;
	}
