#include <iostream>
#include <string>


//Структура содержит: Номер счета, Имя владельца, Баланс счета
//и функции изменения баланса и вывод состояния счета
struct bankAccountInformation
{
    int& accountNumber;
    std::string& nameOwner;
    double& amountMoney;

//функция изменения баланса
    void changeBalance()
    {
        std::cout << "Введите новый баланс: ";
        std::cin >> amountMoney;
        std::cout << std::endl;
    }
    
//функция вывода состояния счета
    void print()
    {
        std::cout << "Ваш счет: " << nameOwner << ',' << ' ' << accountNumber << ',' << ' ' << amountMoney << std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    int number;
    std::string name;
    double balance;

    std::cout << "Введите номер счета: ";
    std::cin >> number;
    std::cout << std::endl;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << std::endl;
    std::cout << "Введите баланс: ";
    std::cin >> balance;
    std::cout << std::endl;

    bankAccountInformation user{ number, name, balance };
    user.changeBalance();
    user.print();
}

