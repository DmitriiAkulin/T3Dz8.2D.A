#include "Quadrangle.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
}

Quadrangle::Quadrangle() :Quadrangle(10, 20, 30, 40, 50, 60, 70, 180) 
{ name = "четырехугольник:"; _side_count = 4;
if ((A + B + C + D) != 360 && _side_count == 4) { throw MyExeption{ "Четырехугольник.Ошибка Создания фигуры Сумма углов не равна 360" }; }
if (_side_count != 4 && ((A + B + C + D) == 360)) { throw MyExeption{ "Четырехугольник.Ошибка Создания фигуры: .Число сторон не равно 4" }; }
if (_side_count != 4 && ((A + B + C + D) != 360)) {
    throw MyExeption
    { "Ошибка Создания фигуры: Сумма углов не равна 360,число сторон не равно 4" };
}
}

bool Quadrangle::check() {
    return (((A + B + C + D) == 360) && _side_count == 4);
}

 void Quadrangle::print_info(){
    cout << endl;

    
        

    Figure::print_info();
    cout << "Стороны: " << "а=" << a << " b=" << b << " c="
        << c << " d=" << d << endl << "Углы:    " << "A=" << A << " B=" << B << " C=" << C << " D=" << D
        << endl << endl;
     
    
}