#include "IsoscelesTriangle.h"


IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) :Triangle() {
        name = "равнобедренный треугольник:";
        this->a = a;
        this->b = b;
        this->c = a;//изменено
        this->A = A;
        this->B = B;
        this->C = A;//изменено
        if (C != A) throw MyExeption{ "Ошибка Создания фигуры: Углы основания равнобедренного треугольника не равны 90" };
        if (c != a) throw MyExeption{ "Ошибка Создания фигуры: Стороны а и с равнобедренного треугольника не равны" };
    }

IsoscelesTriangle::IsoscelesTriangle() :IsoscelesTriangle(10, 20, 50, 60) {}//вводим размеры равнобедренного тр-ка без угла С и стороны с

bool IsoscelesTriangle::check()  {
    return ((A == C) && (a == c) && Triangle::check());
}

void IsoscelesTriangle::print_info()  {
    Triangle::print_info();
}


