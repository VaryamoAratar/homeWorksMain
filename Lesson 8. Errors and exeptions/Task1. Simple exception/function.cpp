#include "function.h"

int function(std::string* str, int forbidden_length)
{
    int lenght = str->length();

    if (lenght == forbidden_length) throw "�� ����� ����� ��������� �����! �� ��������";
    else return lenght;
};
