#include <iostream>
#include <string>
#include <fstream>

//класс Адреса
class Addresses
{
public:
    Addresses() //можно инициализировать со значениями по умолчанию, но не знаю есть ли смысл?
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


private:
    std::string nameCity;   //Название города
    std::string nameStreet; //Название улицы
    int numHouse;           //Номер дома
    int numApart;           //Номер квартиры

};


int main()
{
    setlocale(LC_ALL, "Russian");

    std::string word;
    int nSize{ 0 };

    //открываем in.txt
    std::ifstream fIn("in.txt");

    //проверяем, открылся ли файл.
    if (!fIn.is_open())
    {
        std::cout << "File opening error!";
        return 0;
    }

    //считываем сколько адресов в файле
    fIn >> word;
    nSize = std::stoi(word);

    //создаем массив объектов
    Addresses* address = new Addresses[nSize];

    //считываем из файла и заполняем поля обектов
    for (int i = 0; i < nSize; i++)
    {
        int numHouse;
        int numApart;

        fIn >> word;
        address[i].set_nameCity(word);
        fIn >> word;
        address[i].set_nameStreet(word);
        fIn >> word;
        numHouse = std::stoi(word);
        address[i].set_numHouse(numHouse);
        fIn >> word;
        numApart = std::stoi(word);
        address[i].set_numApart(numApart);
    }

    //закрываем in.txt
    fIn.close();

    //открываем для записи out.txt
    std::ofstream fOut("out.txt");

    //запись данных в файл out.txt
    fOut << nSize << std::endl;
    for (int i = nSize - 1; i >= 0; i--)
    {
        address[i].get_nameCity(word);
        fOut << word << ',' << ' ';
        address[i].get_nameStreet(word);
        fOut << word << ',' << ' ';
        fOut << address[i].get_numHouse() << ',' << ' ';
        fOut << address[i].get_numApart() << std::endl;
    }

    //закрываем out.txt
    fOut.close();

    //удаляем массив объектов
    delete[] address;

    return 0;
}

