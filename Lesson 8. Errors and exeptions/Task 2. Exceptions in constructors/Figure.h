#pragma once
#include<iostream>
#include"MyError.h"

//������� ����� ������
class Figure
{
public:
    Figure();
    //����������� ����� ��� ������ ������ � �������
    virtual void print_info();
    
   

protected:
    //����������� ����� ��� �������� ������������ ������
    virtual bool checkCorrectness();
    int get_sides_count();
    std::string get_name();

    int sides_count;
    std::string name;
};
