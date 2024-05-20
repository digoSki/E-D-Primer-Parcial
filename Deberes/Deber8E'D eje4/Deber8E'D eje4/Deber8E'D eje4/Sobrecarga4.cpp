#include <iostream> 
#include "Sobrecarga4.h"
using namespace std;

Sobrecarga4::Sobrecarga4() : a(0), b(0) {}

Sobrecarga4::Sobrecarga4(int a, int b) : a(a), b(b) {}

void Sobrecarga4::pedir() {
	cout << "\nIngrese el dato a: "; cin >> a;
	cout << "\nIngrese el dato b: "; cin >> b;

}

Sobrecarga4 Sobrecarga4 :: operator - (Sobrecarga4& p) {

	Sobrecarga4 nuevaClase;
	nuevaClase.a = a - p.a;
	nuevaClase.b = b - p.b;

	return nuevaClase;
}

void Sobrecarga4::mostrar() {
	cout << "\nResultado entre datos a: " << a << "\nResultado entre datos b: " << b << endl;

}