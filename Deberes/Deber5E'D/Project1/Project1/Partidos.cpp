#include "Partidos.h"
#include <iostream>
using namespace std;

Partidos::Partidos(int num, int den) {
	this->num = num;
	this->den = den;
}

int Partidos::getNum(void) {
	return num;
}

int Partidos::getDen(void) {
	return den;
}

void Partidos::setNum(int newNum) {
	this->num = newNum;
}

void Partidos::setDen(int newDen) {
	this->den = newDen;
}

Partidos::Partidos() :num(0), den(1) {}

void Partidos::mostrarDatos(void) {
	cout << getNum() << "/" << getDen() << endl;
}

