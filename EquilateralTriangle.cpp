#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int a) :Triangle() {
    name = "равноcторонний треугольник:";
    this->a = a;//изменено
    this->b = a;//изменено
    this->c = a;//изменено
    this->A = 60;//изменено
    this->B = A;//изменено
    this->C = A;//изменено
}
EquilateralTriangle::EquilateralTriangle() :EquilateralTriangle(30) {}

bool EquilateralTriangle::check(){
    return ((A == B) && (B == C) && (a == b) && (b == c) && Triangle::check());
}

void EquilateralTriangle::print_info() {
    Triangle::print_info();
}