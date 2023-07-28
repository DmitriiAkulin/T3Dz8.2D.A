#pragma once
#include <iostream>
#include "_Rectangle.h"
using std::cout;
using std::endl;

class _Square : public _Rectangle {
protected:
    _Square(int a);

public:
    _Square();

    bool check() override;

    void print_info() override;

};

