#include "Racionalizar.h"
#include <iostream>
using namespace std;

Racionalizar::Racionalizar(int num, int den) {
    this->num = num;
    this->den = den;
}

Racionalizar::Racionalizar() : num(0), den(1) {}

int Racionalizar::getNum(void) {
    return num;
}

int Racionalizar::getDen(void) {
    return den;
}

void Racionalizar::setNum(int newNum) {
    this->num = newNum;
}

void Racionalizar::setDen(int newDen) {
    this->den = newDen;
}

void Racionalizar::mostrarDatos(void) {
    cout << getNum() << "/" << getDen() << endl;
}

void Racionalizar::mostarLectura() {
    cout << "OPERACIONES REALIZADAS" << endl;
}