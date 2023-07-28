#pragma once
#include "figure.h"
#include <iostream>
using std::cout;
using std::endl;


class Triangle : public Figure {
protected:
       
    Triangle(int a, int b, int c, int A, int B, int C);


public:
    Triangle();
   
    bool check() override;
    void print_info() override;
};