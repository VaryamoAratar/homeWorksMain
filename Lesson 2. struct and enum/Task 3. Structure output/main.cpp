#include <iostream>
#include <string>

struct Address
{
    std::string cityName = "Unknown"; //название города
    std::string streetName = "Unknown"; //улицы
    unsigned short homeNumber = 0; //номер дома
    unsigned short apartNumber = 0; //номер квартиры
    unsigned int index = 000000; //индекс.
};

//Вывод экземпляра структуры на консоль 
void printAddress(Address& print)
{
    std::cout << "Адрес:" << std::endl;
    std::cout << "Город: " << print.cityName << std::endl;
    std::cout << "Улица: " << print.streetName << std::endl;
    std::cout << "Номер дома: " << print.homeNumber << std::endl;
    std::cout << "Номер квартиры: " << print.apartNumber << std::endl;
    std::cout << "Индекс: " << print.index << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Address address0;
    printAddress(address0);

    Address address1 = { "Ижевск", "Пушкинская", 261, 1, 426000 };
    printAddress(address1);

    Address* address2 = new Address;
    address2->cityName = "Казань";
    address2->streetName = "Ф. Амирхана";
    address2->homeNumber = 12;
    address2->apartNumber = 2;
    address2->index = 420000;
    printAddress(*address2);
    
    delete address2;
    return 0;
}

