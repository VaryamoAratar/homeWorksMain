#include <iostream>
#include <string>
#include <fstream>

//класс Адрес
class Address
{
public:
    Address(std::string nameCity, std::string nameStreet, int numHouse, int numApart) :
        nameCity{ nameCity }, nameStreet{ nameStreet }, numHouse{ numHouse }, numApart{ numApart }
    {}

    //сеттеры
    void set_nameCity(std::string nameCity) { this->nameCity = nameCity; }
    void set_nameStreet(std::string nameStreet) { this->nameStreet = nameStreet; }
    void set_numHouse(int numHouse) { this->numHouse = numHouse; }
    void set_numApart(int numApart) { this->numApart = numApart; }

    //геттеры
    int get_numHouse() { return numHouse; }
    int get_numApart() { return numApart; }
    void get_nameCity(std::string& outName) { outName = nameCity; }
    void get_nameStreet(std::string& outName) { outName = nameStreet; }

    //создаем строку для вывода
    std::string get_output_address(std::string& outAddress)
    {
        outAddress = nameCity + ',' + ' ' + nameStreet + ',' + ' ' + std::to_string(numHouse) + ',' + ' ' + std::to_string(numApart);
        return outAddress;
    }

private:
    std::string nameCity;   //Название города
    std::string nameStreet; //Название улицы
    int numHouse;           //Номер дома
    int numApart;           //Номер квартиры
};

void sort(Address** address, int size)
{
}


int main()
{
    setlocale(LC_ALL, "Russian");

    std::string stringIn;
    int nSize{ 0 };
    std::string nameCity;
    std::string nameStreet;
    int numHouse;
    int numApart;

    //открываем in.txt
    std::ifstream fIn("in.txt");

    //проверяем, открылся ли файл.
    if (!fIn.is_open())
    {
        std::cout << "File opening error!";
        return 0;
    }

    //считываем сколько адресов в файле
    fIn >> stringIn;
    nSize = std::stoi(stringIn);

    //создаем массив указателей объектов
    Address** address = new Address * [nSize];

    //считываем из файла и создаем обекты с инициализацией
    for (int i = 0; i < nSize; i++)
    {
        fIn >> nameCity;
        fIn >> nameStreet;
        fIn >> stringIn;
        numHouse = std::stoi(stringIn);
        fIn >> stringIn;
        numApart = std::stoi(stringIn);

        address[i] = new Address(nameCity, nameStreet, numHouse, numApart);
    }

    //закрываем in.txt
    fIn.close();

    //открываем для записи out.txt
    std::ofstream fOut("out.txt");

    //запись данных в файл out.txt
    fOut << nSize << std::endl;
    for (int i = nSize - 1; i >= 0; i--)
    {
        address[i]->get_output_address(stringIn);
        fOut << stringIn << std::endl;
        delete address[i];
    }

    //закрываем out.txt
    fOut.close();

    //удаляем массив указателей объектов
    delete[] address;

    return 0;
}

