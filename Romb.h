#pragma once
#include <iostream>
#include "Parallelogram.h"
using std::cout;
using std::endl;

class Romb : public Parallelogram {
protected:

    Romb(int a, int A, int B);

public:
    Romb();

    bool check() override;

    void print_info() override;
};
