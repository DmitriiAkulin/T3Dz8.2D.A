// FigureT3Dz5.3.D.A

#include <iostream>

using std::cout;
using std::endl;
using std::string;

#include <iostream>

#include "figure.h"
#include "Triangle.h"
#include "RectangularTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "_Rectangle.h"
#include "_Square.h"
#include "Romb.h"

#include "exeption.h"

int main()
{
    setlocale(LC_ALL, "rus");

    Figure figure;
    Figure* pointer_t;
    figure.print_info();
    
    // треугольники    
    Triangle triangle;    pointer_t = &triangle;    pointer_t->print_info();      
    RectangularTriangle rec_triangle; pointer_t = &rec_triangle; pointer_t->print_info();   
    IsoscelesTriangle iso_triangle; pointer_t = &iso_triangle; pointer_t->print_info();    
    EquilateralTriangle equi_triangle; pointer_t = &equi_triangle; pointer_t->print_info();

    //четырехугольники    
    Quadrangle quadrangle; pointer_t = &quadrangle; pointer_t->print_info();    
    _Rectangle rectangle; pointer_t = &rectangle; pointer_t->print_info();   
    _Square squar; pointer_t = &squar; pointer_t->print_info();   
    Parallelogram parall; pointer_t = &parall; pointer_t->print_info();    
    Romb romb; pointer_t = &romb; pointer_t->print_info();

    return 0;
}
