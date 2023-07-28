#include "_Rectangle.h"

_Rectangle::_Rectangle(int a, int b) :Parallelogram() {
    name = "прямоугольник:";
    //изменено
    this->a = a;
    this->b = b;
    this->c = a;
    this->d = b;
    this->A = 90;
    this->B = A;
    this->C = A;
    this->D = A;
}

    _Rectangle::_Rectangle() : _Rectangle(10, 20) {}

    bool _Rectangle::check()  {
        return ((A == B) && Parallelogram::check());
    }

    void _Rectangle::print_info()  {
        Quadrangle::print_info();
    }

