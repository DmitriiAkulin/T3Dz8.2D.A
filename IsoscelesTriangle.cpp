#include "IsoscelesTriangle.h"


IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) :Triangle() {
        name = "�������������� �����������:";
        this->a = a;
        this->b = b;
        this->c = a;//��������
        this->A = A;
        this->B = B;
        this->C = A;//��������
    }

IsoscelesTriangle::IsoscelesTriangle() :IsoscelesTriangle(10, 20, 50, 60) {}//������ ������� ��������������� ��-�� ��� ���� � � ������� �

bool IsoscelesTriangle::check()  {
    return ((A == C) && (a == c) && Triangle::check());
}

void IsoscelesTriangle::print_info()  {
    Triangle::print_info();
}


