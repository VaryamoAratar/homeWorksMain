#pragma once
#include<iostream>

class Figure
{
public:
    Figure();
    virtual void print();

protected:
    int get_sides_count();
    std::string get_name();

    int sides_count;
    std::string name;
};