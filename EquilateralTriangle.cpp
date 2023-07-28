#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int a) :Triangle() {
    name = "�����c�������� �����������:";
    this->a = a;//��������
    this->b = a;//��������
    this->c = a;//��������
    this->A = 60;//��������
    this->B = A;//��������
    this->C = A;//��������
}
EquilateralTriangle::EquilateralTriangle() :EquilateralTriangle(30) {}

bool EquilateralTriangle::check(){
    return ((A == B) && (B == C) && (a == b) && (b == c) && Triangle::check());
}

void EquilateralTriangle::print_info() {
    Triangle::print_info();
}