#include "RectangularTriangle.h"


RectangularTriangle::RectangularTriangle(int a, int b, int c, int A, int B) :Triangle() {
    name = "прямоугольный треугольник:";
    //изменено
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = 90;
    if (C != 90) throw MyExeption{ "Ошибка Создания фигуры: Угол С не равен 90" };
}

RectangularTriangle::RectangularTriangle() : RectangularTriangle(10, 20, 30, 50, 60) {}//вводим все кроме угла С

bool RectangularTriangle::check() {
    return ((C == 90) && Triangle::check());
}

void RectangularTriangle::print_info()  {
  /*try {
   if( C!= 90) { throw MyExeption{ "Ошибка Создания фигуры: Угол С не равен 90" }; }*/
    Triangle::print_info();
   /* }
  catch (MyExeption ex)
  {
      std::cout << ex.getMessage() << std::endl << std::endl;
  }*/
}