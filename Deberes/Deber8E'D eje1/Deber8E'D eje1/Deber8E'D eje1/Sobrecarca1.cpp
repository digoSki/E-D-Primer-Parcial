#include <iostream>
#include "Sobrecarga1.h"

using namespace std;

Sobrecarga1 :: Sobrecarga1(): a(0), b(0){}

Sobrecarga1::Sobrecarga1(int a, int b) : a(a), b(b){}

void Sobrecarga1::pedir() {
	cout<<"\nIngrese el primer dato: "; cin >> a;
	cout << endl;
	cout << "\nIngrese el segundo dato: "; cin >> b;
}

Sobrecarga1 Sobrecarga1:: operator + (Sobrecarga1 &p) {

	Sobrecarga1 nueva_clase;
	nueva_clase.a = a + p.a;
	nueva_clase.b = b + p.b;

	return nueva_clase;
}

void Sobrecarga1::mostrar() {

	cout << "\nResultado a: " << a << "\nResultado b: " << b << endl;

}