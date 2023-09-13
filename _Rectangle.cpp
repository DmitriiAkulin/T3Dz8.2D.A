#include "_Rectangle.h"

_Rectangle::_Rectangle(int a, int b) :Parallelogram() {
    name = "прямоугольник:";
    //изменено
    this->a = a;
    this->b = b;
    this->c = a;
    this->d = b;
    this->A = 90;
    this->B = 90;
    this->C = A;
    this->D = A;
    if (C != 90||A!=90||B!=90||D!=90) throw MyExeption{ "Прямоугольник. Ошибка Создания фигуры: Угол не равен 90" };
    if (a != c || b != d) throw MyExeption{ "Прямоугольник. Ошибка Создания фигуры: противоположные стороны не равны" };
}

    _Rectangle::_Rectangle() : _Rectangle(10, 20) {}

    bool _Rectangle::check()  {
        return ((A == B) && Parallelogram::check());
    }

    void _Rectangle::print_info()  {
        Quadrangle::print_info();
    }

