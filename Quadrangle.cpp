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
{ name = "���������������:"; _side_count = 4;
if ((A + B + C + D) != 360 && _side_count == 4) { throw MyExeption{ "���������������.������ �������� ������ ����� ����� �� ����� 360" }; }
if (_side_count != 4 && ((A + B + C + D) == 360)) { throw MyExeption{ "���������������.������ �������� ������: .����� ������ �� ����� 4" }; }
if (_side_count != 4 && ((A + B + C + D) != 360)) {
    throw MyExeption
    { "������ �������� ������: ����� ����� �� ����� 360,����� ������ �� ����� 4" };
}
}

bool Quadrangle::check() {
    return (((A + B + C + D) == 360) && _side_count == 4);
}

 void Quadrangle::print_info(){
    cout << endl;

    
        

    Figure::print_info();
    cout << "�������: " << "�=" << a << " b=" << b << " c="
        << c << " d=" << d << endl << "����:    " << "A=" << A << " B=" << B << " C=" << C << " D=" << D
        << endl << endl;
     
    
}