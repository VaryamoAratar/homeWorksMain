#include "Figure.h"

//Базовый класс Фигуры

//Базовый класс Фигуры
Figure::Figure()
{
    sides_count = 0;
    name = "Фигура";

    if (!checkCorrectness())
    {
        std::cout << get_name();
        throw MyError(" Ошибка создания фигуры. Причина: Колическво сторон больше 0");
    }

};
void Figure::print_info()
{
    std::cout << get_name() << " (Количество сторон: " << get_sides_count() << ')';
    if (checkCorrectness())
    {
        std::cout << " создана" << std::endl;
    }
}
    //виртуальный метод для проверки правильности фигуры
bool Figure::checkCorrectness()
{
    if (get_name() == "Фигура" && get_sides_count() == 0)
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

    