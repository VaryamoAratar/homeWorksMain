#include <iostream>
#include "Fraction.h"

void print(Fraction& f1, Fraction& f2, Fraction& result, char a)
{
	std::cout << f1.get_numerator() << '/' << f1.get_denominator()
		<< a << f2.get_numerator() << '/' << f2.get_denominator()
		<< '=' << result.get_numerator() << '/' << result.get_denominator() << '\n';
}

int main()
{
	setlocale(LC_ALL, "russian");
	int num1;
	int num2;
	int denom1;
	int denom2;

	std::cout << "Введите числитель первой дроби: ";
	std::cin >> num1;
	std::cout << "Введите знаменатель первой дроби: ";
	std::cin >> denom1;
	std::cout << "Введите числитель второй дроби: ";
	std::cin >> num2;
	std::cout << "Введите знаменатель второй дроби: ";
	std::cin >> denom2;


	Fraction f1(num1, denom1);
	Fraction f2(num2, denom2);

	//сумма
	Fraction add = f1 + f2;
	print(f1, f2, add, '+');
	//разность
	Fraction sub = f1 - f2;
	print(f1, f2, sub, '-');
	//умножение
	Fraction multi = f1 * f2;
	print(f1, f2, multi, '*');
	//деление
	Fraction div = f1 / f2;
	print(f1, f2, div, '/');
	//Унарный минус
	Fraction uMinusF1 = -f1;
	std::cout << '-' << ' ' << f1.get_numerator() << '/' << f1.get_denominator()
		<< '=' << uMinusF1.get_numerator() << '/' << uMinusF1.get_denominator() << '\n';
	//инкремент
	std::cout << '\n' << "++" << f1.get_numerator() << '/' << f1.get_denominator() << '=';
	Fraction inc_ = ++f1;
	std::cout << inc_.get_numerator() << '/' << inc_.get_denominator() << '\n';
	//инкремент
	std::cout << "++" << f1.get_numerator() << '/' << f1.get_denominator()
		<< '*' << f2.get_numerator() << '/' << f2.get_denominator() << '=';
	Fraction incMulti = (++f1) * f2;
	std::cout << incMulti.get_numerator() << '/' << incMulti.get_denominator() << '\n';
	std::cout << "Значение первой дроби: " << f1.get_numerator() << '/' << f1.get_denominator() << '\n';
	//декремент
	std::cout << f1.get_numerator() << '/' << f1.get_denominator() << "--" << ' '
		<< '*' << f2.get_numerator() << '/' << f2.get_denominator() << '=';
	Fraction decMulti = (f1--) * f2;
	std::cout << decMulti.get_numerator() << '/' << decMulti.get_denominator() << '\n';
	std::cout << "Значение первой дроби: " << f1.get_numerator() << '/' << f1.get_denominator() << '\n';


	return 0;
}