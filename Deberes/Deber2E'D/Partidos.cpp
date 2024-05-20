#include "Partidos.h"

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


//Suma con TDA
Partidos Partidos::resta(Partidos a) {
	int numeradorF = num * a.getDen() - a.getNum() * den;
	int denominadorF = den * a.getDen();
	return Partidos(numeradorF, denominadorF);
}

//Suma con VOID
void Partidos::Resta(Partidos a) {
	int numeradorF = num * a.getDen() - a.getNum() * den;
	int denominadorF = den * a.getDen();
	cout << numeradorF << "/" << denominadorF << endl;
}

//Suma con INT
int Partidos::res(Partidos a) {
	return  (num * a.getDen() - a.getNum() * den) / (den * a.getDen());
}

//Suma con FLOAT
float Partidos::Ressta(Partidos a) {
	float resultado = static_cast<float>(num * a.getDen() - a.getNum() * den) / (den * a.getDen());
	return resultado;
}

void Partidos::mostarLectura() {
	cout << "/nOPERACION REALIZADA CON EXITO/n";
}