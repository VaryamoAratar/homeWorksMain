#include "Figure.h"

//Базовый класс Фигуры

Figure::Figure()
    {
        sides_count = 0;
        name = "Фигура";
    };
    void Figure::print()
    {
        std::cout << get_name() << std::endl;
        std::cout << "Количество сторон: " << get_sides_count() << std::endl;
    }

    int Figure:: get_sides_count() { return sides_count; }
    std::string Figure:: get_name() { return (std::string(name)); }
