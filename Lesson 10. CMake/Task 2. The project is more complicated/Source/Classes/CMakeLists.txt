cmake_minimum_required(VERSION 3.22.2)
project(Task_2_Cmake_more_complicated VERSION 0.1)
set(source_files print_info.cpp EquilateralTriangle.cpp Figure.cpp IsoscelesTriangle.cpp Parallelogram.cpp Quadrangle.cpp Rectangle.cpp Rhomb.cpp RightTriangle.cpp Square.cpp Triangle.cpp)
add_library(Classes ${source_files})