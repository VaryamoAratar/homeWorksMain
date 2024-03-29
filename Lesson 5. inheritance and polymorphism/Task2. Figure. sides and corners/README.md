# Задача 2. Фигуры. Стороны и углы
В этом задании мы усложняем иерархию классов для
усложнённой предметной области.

У нас появляется информация о длине сторон и углах фигур,
а также несколько более конкретных фигур.
Теперь в треугольнике мы должны хранить информацию о длине
всех его трёх сторон (`a`, `b`, `c`) и значениях его трёх углов
(`A`, `B`, `C`).
В четырёхугольнике мы храним информацию о длине его четырёх
сторон (`a`, `b`, `c`, `d`) и значениях его четырёх углов
(`A`, `B`, `C`, `D`).

Также у нас появляются более конкретные фигуры: 
 - прямоугольный треугольник (угол `C` всегда равен 90);
 - равнобедренный треугольник (стороны `a` и `c` равны, углы `A` и `C` равны);
 - равносторонний треугольник (все стороны равны, все углы равны 60);
 - прямоугольник (стороны `a`,`c` и `b`,`d` попарно равны, все углы равны 90);
 - квадрат (все стороны равны, все углы равны 90);
 - параллелограмм (стороны `a`,`c` и `b`,`d` попарно равны, углы `A`,`C` и `B`,`D` попарно равны);
 - ромб (все стороны равны, углы `A`,`C` и `B`,`D` попарно равны).
 
Мы должны иметь возможность узнать у каждой фигуры длины её
сторон и значения её углов, но извне мы не должны быть 
способны изменить длины сторон и углы.

Не должно быть возможности создать фигуры, не удовлетворяющие
перечисленным условиям. Например, нельзя создать квадрат 
с разными углами. Геометрические соотношения проверять не нужно.
Например, сумма углов в треугольнике может быть не равна 180.

Задача: 
1. Спроектировать и реализовать классы, 
описывающие предметную область.
2. Продемонстрировать их работу
- создаем по одному экземпляру каждой фигуры
- выводим на экран информацию о длинах её 
сторон и величине её углов. `Значения используем произвольные`.

Инициализацию длин сторон и величин углов нужно выполнить с
помощью вызова базовых конструкторов.

Для вывода информации о фигуре создаем функцию `print_info`, 
которая будет принимать в качестве аргумента указатель на
базовый класс фигуры.
