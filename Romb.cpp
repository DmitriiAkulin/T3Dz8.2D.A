#include "Romb.h"

Romb::Romb(int a, int A, int B) :Parallelogram() {
    name = "ромб:";
    this->a = a;
    this->b = a;
    this->c = 10;
    this->d = a;
    this->A = A;
    this->B = B;
    this->C = A;
    this->D = B;
    if (a != b || a != c || a != d) throw MyExeption{ "Ромб. Ошибка Создания фигуры: Стороны не равны" };
    if (A != C || B != D) throw MyExeption{ "Параллелограмм. Ошибка Создания фигуры: противоположные углы не равны" };
}


 Romb::Romb() : Romb(30, 150, 30) {}

    bool Romb::check() {
        return ((a == b) && Parallelogram::check());
    }

    void Romb::print_info(){
        Quadrangle::print_info();
    }