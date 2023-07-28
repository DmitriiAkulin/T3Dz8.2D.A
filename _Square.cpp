#include "_Square.h"

_Square::_Square(int a) :_Rectangle() {
    name = "квадрат:";
    //изменено 
    this->a = a;
    this->b = a;
    this->c = a;
    this->d = a;
}
_Square::_Square() : _Square(20) {}

bool _Square::check(){
    return ((a == b) && _Rectangle::check());
}

void _Square::print_info() {
    Quadrangle::print_info();
}