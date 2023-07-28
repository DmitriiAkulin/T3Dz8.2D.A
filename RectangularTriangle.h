#pragma once
#include "Triangle.h"
#include <iostream>
using std::cout;
using std::endl;
class RectangularTriangle : public Triangle {
protected:
    RectangularTriangle(int a, int b, int c, int A, int B);



public:

    RectangularTriangle();

    bool check() override;
    void print_info() override;

};