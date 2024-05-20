#include "Sobrecarga3.h"
#include <iostream>

using namespace std;

Sobrecarga3 ::Sobrecarga3() : a(0), b(0){}

Sobrecarga3 :: Sobrecarga3(float a, float b) : a(a), b(b){}

void Sobrecarga3::pedir() {
	cout << "\nIngrese el dato a: "; cin >> a;
	cout << "\nIngrese el dato b: "; cin >> b;

}

Sobrecarga3 Sobrecarga3 :: operator / (Sobrecarga3& p) {

	Sobrecarga3 nuevaClase;
	nuevaClase.a = a / p.getA();
	nuevaClase.b = b / p.getB();

	return nuevaClase;
}

void Sobrecarga3::mostrar() {
	cout << "\nResultado entre datos a: " << a << "\nResultado entre datos b: " << b << endl;

}