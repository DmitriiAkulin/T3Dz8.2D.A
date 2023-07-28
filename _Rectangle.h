#pragma once
#include <iostream>
#include "Parallelogram.h"
using std::cout;
using std::endl;
class _Rectangle : public Parallelogram {
protected:
    _Rectangle(int a, int b);

public:
    _Rectangle();

    bool check() override;

    void print_info() override;      
   
};
