#include <iostream>
#include "Fraction.h"

std::ostream& operator << (std::ostream& out, const Fraction& f)
{
	if (f.denominator_ == 1)
	{
		out << f.numerator_;
	}
	else
	{
		out << f.numerator_ << '/' << f.denominator_;
	}
	return out;
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
	std::cout << f1 << '+' << f2 << '=' << f1 + f2 << std::endl;
	//разность
	std::cout << f1 << '-' << f2 << '=' << f1 - f2 << std::endl;
	//умножение
	std::cout << f1 << '*' << f2 << '=' << f1 * f2 << std::endl;
	//деление
	std::cout << f1 << '/' << f2 << '=' << f1 / f2 << std::endl;
	//Унарный минус
	std::cout << "минус" << ' ' << f1 << '=' << -f1 << '\n';
	//инкремент
	std::cout << "++" << f1 << '=';
	std::cout << ++f1 << std::endl;
	//инкремент
	std::cout << "++" << f1	<< '*' << f2 << '=';
	std::cout << (++f1) * f2 << '\n';
	std::cout << "Значение первой дроби: " << f1 << '\n';
	//декремент
	std::cout << f1 << "--" << ' ' << '*' << f2 << '=';
	std::cout << (f1--) * f2 << '\n';
	std::cout << "Значение первой дроби: " << f1 << '\n';


	return 0;
}