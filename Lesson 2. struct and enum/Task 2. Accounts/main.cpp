#include <iostream>
#include <string>
#include <Windows.h>


//��������� ��������: ����� �����, ��� ���������, ������ �����
//� ������� ��������� ������� � ����� ��������� �����
struct bankAccountInformation
{
    int& accountNumber;
    std::string& nameOwner;
    double& amountMoney;

//������� ��������� �������
    void changeBalance()
    {
        std::cout << "������� ����� ������: ";
        std::cin >> amountMoney;
        std::cout << std::endl;
    }
    
//������� ������ ��������� �����
    void print()
    {
        std::cout << "��� ����: " << nameOwner << ',' << ' ' << accountNumber << ',' << ' ' << amountMoney << std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    std::string name;
    double balance;

    std::cout << "������� ����� �����: ";
    std::cin >> number;
    std::cout << std::endl;
    std::cout << "������� ���: ";
    std::cin >> name;
    std::cout << std::endl;
    std::cout << "������� ������: ";
    std::cin >> balance;
    std::cout << std::endl;

    bankAccountInformation user{ number, name , balance };
    user.changeBalance();
    user.print();
}

