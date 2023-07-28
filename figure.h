#pragma once
#include <string>
#include <iostream>
#include "exeption.h"
#include  <stdlib.h>
class Figure{
protected:
int _side_count;//число сторон
std::string  name = "фигура:";
int a, b, c, d;//длины сторон
int A, B, C, D;//величины углов

Figure(int _side_count);

public:
Figure();
int get_sides_count();
std::string get_name();
std::string correct;

virtual bool check();
virtual void print_info();
};