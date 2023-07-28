#include "Parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) :Quadrangle() {
    name = "параллелограмм:";
    //изменено
    this->a = a;
    this->b = b;
    this->c = a;
    this->d = b;
    this->A = A;
    this->B = B;
    this->C = A;
    this->D = B;
}

Parallelogram::Parallelogram() : Parallelogram(20, 30, 50, 40) {}

bool Parallelogram::check() {
    return ((A == C) && (B == D) && (b == d) && (a == c) && Quadrangle::check());
}

void Parallelogram::print_info() {
    Quadrangle::print_info();
}