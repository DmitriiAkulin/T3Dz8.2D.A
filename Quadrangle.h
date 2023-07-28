#pragma once
#include "figure.h"
#include <iostream>
using std::cout;
using std::endl;

class Quadrangle : public Figure {
protected:

    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);

public:

    Quadrangle();

    bool check() override;
    void print_info() override;
};