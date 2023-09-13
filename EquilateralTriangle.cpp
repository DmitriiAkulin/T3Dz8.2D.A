#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int a) :Triangle() {
    name = "равноcторонний треугольник:";
    this->a = a;//изменено
    this->b = a;//изменено
    this->c = c;//изменено изменено! с = а было
    this->A = 60;//изменено
    this->B = A;//изменено
    this->C = A;//изменено
    if (A!=60||B!=60||C!=60) throw MyExeption{ "Ошибка Создания фигуры: Углы равностороннего треугольника не равны 60" };
    if (a != b || a != c || c != b) throw MyExeption{ "Ошибка Создания фигуры: стороны равностороннего треугольника не равны" };
}
EquilateralTriangle::EquilateralTriangle() :EquilateralTriangle(30) {}

bool EquilateralTriangle::check(){
    return ((A == B) && (B == C) && (a == b) && (b == c) && Triangle::check());
}

void EquilateralTriangle::print_info() {
    Triangle::print_info();
}