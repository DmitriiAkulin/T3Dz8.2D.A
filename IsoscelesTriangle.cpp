#include "IsoscelesTriangle.h"


IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) :Triangle() {
        name = "равнобедренный треугольник:";
        this->a = a;
        this->b = b;
        this->c = a;//изменено
        this->A = A;
        this->B = B;
        this->C = A;//изменено
    }

IsoscelesTriangle::IsoscelesTriangle() :IsoscelesTriangle(10, 20, 50, 60) {}//вводим размеры равнобедренного тр-ка без угла — и стороны с

bool IsoscelesTriangle::check()  {
    return ((A == C) && (a == c) && Triangle::check());
}

void IsoscelesTriangle::print_info()  {
    Triangle::print_info();
}


