#include "Figure.h"

//������� ����� ������

//������� ����� ������
Figure::Figure()
{
    sides_count = 0;
    name = "������";

    if (!checkCorrectness())
    {
        std::cout << get_name();
        throw MyError(" ������ �������� ������. �������: ���������� ������ ������ 0");
    }

};
void Figure::print_info()
{
    std::cout << get_name() << " (���������� ������: " << get_sides_count() << ')';
    if (checkCorrectness())
    {
        std::cout << " �������" << std::endl;
    }
}
    //����������� ����� ��� �������� ������������ ������
bool Figure::checkCorrectness()
{
    if (get_name() == "������" && get_sides_count() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

    int Figure::get_sides_count() { return sides_count; }
    std::string Figure::get_name() { return (std::string(name)); }

    