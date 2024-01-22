#include"Counter.h"

Counter::Counter(int value) : value{ value }
    {}
Counter::Counter()
    {
        value = 1;
    }

    void Counter::increment() { this->value = value++; }
    void Counter::dicrement() { this->value = value--; }
    int Counter::get_value() { return value; }