#include "Figure.h"

//������� ����� ������

Figure::Figure()
    {
        sides_count = 0;
        name = "������";
    };
    void Figure::print()
    {
        std::cout << get_name() << std::endl;
        std::cout << "���������� ������: " << get_sides_count() << std::endl;
    }

    int Figure:: get_sides_count() { return sides_count; }
    std::string Figure:: get_name() { return (std::string(name)); }
