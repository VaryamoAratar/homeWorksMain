#pragma once
#include"Figure.h"
#ifndef FIGURE_CLASS_EXPORT
#define FIGURE_EXP_API __declspec(dllexport)
#else
#define FIGURE_EXP_API __declspec(dllimport)
#endif

//������� ��� ������ ������ ����� � �������, ��������� ��������� �� ������� �����
FIGURE_EXP_API void print_info(Figure* figure);
