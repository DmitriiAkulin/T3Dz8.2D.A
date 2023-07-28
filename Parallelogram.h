#pragma once
#include <iostream>
#include "Quadrangle.h"
using std::cout;
using std::endl;

class Parallelogram : public Quadrangle{
protected:
    Parallelogram(int a, int b, int A, int B);

public:
    Parallelogram();

    bool check() override;
    void print_info() override;
};