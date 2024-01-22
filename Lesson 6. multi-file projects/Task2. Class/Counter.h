#pragma once

class Counter
{
public:
    Counter(int value);
    Counter();
    void increment();
    void dicrement();
    int get_value();

private:
    int value;
};
