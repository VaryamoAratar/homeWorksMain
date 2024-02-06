#pragma once
#include<iostream>
#ifdef FIGURE_EXPORTS
#define FIGURE_EXP_API __declspec(dllexport)
#else
#define FIGURE_EXP_API __declspec(dllimport)
#endif

class Figure
{
public:
    FIGURE_EXP_API Figure();
    FIGURE_EXP_API virtual void print();

protected:
    int get_sides_count();
    std::string get_name();

    int sides_count;
    std::string name;
};