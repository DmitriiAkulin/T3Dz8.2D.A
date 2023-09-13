#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int a) :Triangle() {
    name = "�����c�������� �����������:";
    this->a = a;//��������
    this->b = a;//��������
    this->c = c;//�������� ��������! � = � ����
    this->A = 60;//��������
    this->B = A;//��������
    this->C = A;//��������
    if (A!=60||B!=60||C!=60) throw MyExeption{ "������ �������� ������: ���� ��������������� ������������ �� ����� 60" };
    if (a != b || a != c || c != b) throw MyExeption{ "������ �������� ������: ������� ��������������� ������������ �� �����" };
}
EquilateralTriangle::EquilateralTriangle() :EquilateralTriangle(30) {}

bool EquilateralTriangle::check(){
    return ((A == B) && (B == C) && (a == b) && (b == c) && Triangle::check());
}

void EquilateralTriangle::print_info() {
    Triangle::print_info();
}