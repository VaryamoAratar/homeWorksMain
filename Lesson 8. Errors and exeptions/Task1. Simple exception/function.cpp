#include "function.h"

int function(std::string* str, int forbidden_length)
{
    int lenght = str->length();

    if (lenght == forbidden_length) throw std::length_error("Вы ввели слово запретной длины! До свидания");
    else return lenght;
};
