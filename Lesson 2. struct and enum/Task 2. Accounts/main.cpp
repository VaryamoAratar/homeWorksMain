#include <iostream>
#include <string>


//Структура для хранения информации о банковском счете 
struct bankAccountInformation
{
    int accountNumber;      //Номер счета
    std::string nameOwner;  //Имя владельца
    double amountMoney;     //Баланс счета
};

//функция вывода состояния счета
void print (bankAccountInformation& user)
{
    std::cout << "Ваш счет: " << user.nameOwner << ',' << ' ' << user.accountNumber << ',' << ' ' << user.amountMoney << std::endl;
}


//функция изменения баланса
void changeBalance(bankAccountInformation& user, const double& newBalance)
{
    user.amountMoney = newBalance;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int number;
    std::string name;
    double balance;
    double newBalance;

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

    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;
    std::cout << std::endl;

    changeBalance(user, newBalance);
    print(user);
}

