﻿#include <iostream>


// перечисление Месяцы
enum class Months
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};


int main()
{
    setlocale(LC_ALL, "Russian");

    int inValueUser{ 1 };
    
    while (inValueUser)
    {
        std::cout << "Введите номер месяца или введите '0' для выхода: ";
        std::cin >> inValueUser;

        auto castValueUser = static_cast<Months>(inValueUser);

        if (inValueUser == 0)
        {
            return 0;
        }
        switch (castValueUser)
        {
        case Months::January: std::cout << "Январь" << std::endl;
            break;
        case Months::February: std::cout << "Февраль" << std::endl;
            break;
        case Months::March: std::cout << "Март" << std::endl;
            break;
        case Months::April: std::cout << "Апрель" << std::endl;
            break;
        case Months::May: std::cout << "Май" << std::endl;
            break;
        case Months::June: std::cout << "Июнь" << std::endl;
            break;
        case Months::July: std::cout << "Июль" << std::endl;
            break;
        case Months::August: std::cout << "Август" << std::endl;
            break;
        case Months::September: std::cout << "Сентябрь" << std::endl;
            break;
        case Months::October: std::cout << "Октябрь" << std::endl;
            break;
        case Months::November: std::cout << "Ноябрь" << std::endl;
            break;
        case Months::December: std::cout << "Декабрь" << std::endl;
            break;
        default: std::cout << "Введено неправильное число! Введите число от 1 до 12!\n" << std::endl;
            break;
        }
    }
}

