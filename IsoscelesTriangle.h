#pragma once
#include "Triangle.h"
#include <iostream>
using std::cout;
using std::endl;

class IsoscelesTriangle : public Triangle {

protected:
    IsoscelesTriangle(int a, int b, int A, int B);



public:

    IsoscelesTriangle();

    bool check() override;
    void print_info() override;

};