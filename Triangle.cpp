#include "Triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
    this->a = a;
    this->b = b;
    this->c = c;    
    this->A = A;
    this->B = B;
    this->C = C;
    
}


Triangle::Triangle() : Triangle(a = 10, b = 20, c = 30, A = 50, B = 60, C = 70)
{
    name = "треугольник:"; _side_count = 3;
    if ((_side_count != 3 && ((A + B + C) != 180))) {
        throw MyExeption
        { "Треугольник Ошибка Создания фигуры:Сумма углов не равна 180,число сторон не равно 3" };
    }
    if ((A + B + C) != 180 && _side_count == 3) { throw MyExeption{ "Треугольник Ошибка Создания фигуры.Причина: Сумма углов не равна 180" }; }
    if (_side_count != 3 && ((A + B + C) == 180)) { throw MyExeption{ "Треугольник Ошибка Создания фигуры: Число сторон не равно 3" }; }
    
}


bool Triangle::check()  {
    return (((A + B + C) == 180) && _side_count == 3);
    }
   
   
    void Triangle::print_info()  {
        cout << endl;
       /* try
        {
            if ((A + B + C) != 180 && _side_count == 3) { throw MyExeption{ "Ошибка Создания фигуры.Причина: Сумма углов не равна 180" }; }
            if (_side_count != 3 && ((A + B + C) == 180)) { throw MyExeption{ "Ошибка Создания фигуры: Число сторон не равно 3" };}
            if ((_side_count != 3 &&((A + B + C) != 180))) { throw MyExeption
                                             {"Ошибка Создания фигуры:Сумма углов не равна 180,число сторон не равно 3" }; }
       */
            Figure::print_info();

            cout << "Стороны: " << "а=" << a << " b=" << b << " c="
                << c << endl << "Углы:    " << "A=" << A << " B=" << B << " C=" << C
                << endl << endl;


        
        /*catch (MyExeption ex)
        {
            std::cout << ex.getMessage() << std::endl << std::endl;
        }
        */
        
        

}