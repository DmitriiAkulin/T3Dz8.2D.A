#pragma once
#include "Triangle.h"
#include <iostream>
using std::cout;
using std::endl;

class EquilateralTriangle : public Triangle {

protected:
	EquilateralTriangle(int a);

public:
	EquilateralTriangle();

	bool check() override;
	void print_info() override;
};