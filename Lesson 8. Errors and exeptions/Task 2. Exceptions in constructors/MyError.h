#pragma once
#include <stdexcept>

class MyError : public std::domain_error
{
public:
    MyError(const char* err);

private:
};

